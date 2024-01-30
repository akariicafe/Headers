@class NSString;
@protocol DAFolderChangeConsumer;

@interface DAFolderChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *folderId;
@property (retain, nonatomic) NSString *parentFolderId;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) long long dataclass;
@property (nonatomic) unsigned int taskId;
@property (nonatomic) BOOL renameOnCollision;
@property (weak, nonatomic) id<DAFolderChangeConsumer> consumer;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initFolderChangeWithChangeType:(unsigned long long)a0 folderId:(id)a1 parentFolderId:(id)a2 displayName:(id)a3 dataclass:(long long)a4 consumer:(id)a5;

@end

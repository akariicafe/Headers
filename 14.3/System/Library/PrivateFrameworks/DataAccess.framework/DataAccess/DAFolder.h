@class NSString;

@interface DAFolder : NSObject

@property (nonatomic) BOOL hasRemoteChanges;
@property (copy, nonatomic) NSString *folderName;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *parentFolderID;
@property (nonatomic) long long dataclass;
@property (nonatomic) BOOL isDefault;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)mailboxID;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)parentMailboxID;

@end

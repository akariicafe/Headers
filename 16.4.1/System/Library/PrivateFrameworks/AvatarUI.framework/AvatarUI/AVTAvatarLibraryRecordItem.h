@class AVTUIEnvironment, NSString;
@protocol AVTAvatarRecord;

@interface AVTAvatarLibraryRecordItem : NSObject <AVTAvatarLibraryItem>

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (void)configureCell:(id)a0 imageProvider:(id)a1;
- (id)initWithAvatarRecord:(id)a0 environment:(id)a1;

@end

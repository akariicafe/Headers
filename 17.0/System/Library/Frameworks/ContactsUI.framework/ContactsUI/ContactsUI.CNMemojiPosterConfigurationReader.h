@class UIColor, NSData;

@interface ContactsUI.CNMemojiPosterConfigurationReader : NSObject {
    void /* unknown type, empty encoding */ memojiPosterConfiguration;
}

@property (class, nonatomic, readonly) BOOL canReadConfiguration;

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSData *avatarImageData;
@property (nonatomic, readonly) NSData *avatarRecordData;
@property (nonatomic, readonly) NSData *avatarPoseData;

+ (id)memojiPosterConfigurationDataFromUserInfo:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPosterConfigurationUserInfo:(id)a0;

@end

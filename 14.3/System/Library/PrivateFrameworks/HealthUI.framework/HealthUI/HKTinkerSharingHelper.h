@interface HKTinkerSharingHelper : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
}

@property (readonly, nonatomic) BOOL isChinaSKUDevice;
@property (nonatomic) BOOL networkAccessEnabledForHealth;

- (id)init;

@end

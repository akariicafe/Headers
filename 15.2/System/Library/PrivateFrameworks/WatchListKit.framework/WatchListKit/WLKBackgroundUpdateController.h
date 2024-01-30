@interface WLKBackgroundUpdateController : NSObject {
    int _notifyToken;
    BOOL _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)dealloc;

@end

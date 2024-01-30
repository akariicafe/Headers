@class NSString;

@interface ACMAppleConnect : NSObject {
    id _private;
}

@property id delegate;
@property (readonly) NSString *version;
@property (nonatomic) unsigned long long logLevel;

+ (id)sharedInstance;

- (void)cancelRequests;
- (id)private;
- (id)init;
- (void)dealloc;
- (void)authenticate:(id)a0;
- (void)authenticateWithRequest:(id)a0 password:(id)a1;
- (void)handleMemoryWarningNotification:(id)a0;
- (void)setupComponents;
- (void)verifyServiceTicket:(id)a0;
- (id)hideAppleConnectSignInDialog;

@end

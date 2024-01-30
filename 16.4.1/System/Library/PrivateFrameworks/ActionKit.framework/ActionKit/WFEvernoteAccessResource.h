@class ENSession;

@interface WFEvernoteAccessResource : WFAccessResource

@property (class, readonly, nonatomic) ENSession *evernoteSession;

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;
+ (id)evernoteCallbackScheme;

- (id)username;
- (id)initWithDefinition:(id)a0;
- (void)dealloc;
- (unsigned long long)status;
- (id)resourceName;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end

@class ENSession;

@interface WFEvernoteAccessResource : WFAccessResource

@property (class, readonly, nonatomic) ENSession *evernoteSession;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceClasses;
+ (id)evernoteCallbackScheme;

- (id)resourceName;
- (unsigned long long)status;
- (id)username;
- (void)dealloc;
- (void)logOut;
- (id)initWithDefinition:(id)a0;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;

@end

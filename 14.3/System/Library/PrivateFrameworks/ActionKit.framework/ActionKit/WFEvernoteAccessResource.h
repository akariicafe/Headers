@class ENSession;

@interface WFEvernoteAccessResource : WFAccessResource

@property (class, readonly, nonatomic) ENSession *evernoteSession;

+ (id)evernoteCallbackScheme;

- (void)dealloc;
- (void)logOut;
- (id)username;
- (id)resourceName;
- (id)initWithDefinition:(id)a0;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (BOOL)canLogOut;

@end

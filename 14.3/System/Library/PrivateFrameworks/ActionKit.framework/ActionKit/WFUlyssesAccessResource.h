@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource

@property (readonly, nonatomic) ICScheme *scheme;

+ (BOOL)refreshesAvailabilityOnApplicationResume;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end

@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource

@property (readonly, nonatomic) ICScheme *scheme;

+ (BOOL)refreshesAvailabilityOnApplicationResume;

- (unsigned long long)status;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (id)protectedResourceDescription;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)associatedAppIdentifier;

@end

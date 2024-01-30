@interface CLClientManagerAuthorizationContext : NSObject

@property (readonly, nonatomic) unsigned long long staticServiceMask;
@property (readonly, nonatomic) unsigned long long effectiveServiceMask;
@property (readonly, nonatomic) unsigned long long provisionalServiceMask;
@property (readonly, nonatomic) int transientAwareRegistrationResult;
@property (readonly, nonatomic) int registrationResult;
@property (readonly, nonatomic) BOOL authorizedForWidgetUpdates;
@property (readonly, nonatomic) int inUseLevel;

- (id)authorizationContextByANDingServiceMaskTuple:(struct CLClientServiceTypeMaskTuple { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isAuthorizedForServiceTypeMask:(unsigned long long)a0;
- (BOOL)isAuthorizedForServiceType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithInUseLevel:(int)a0 registrationResult:(int)a1 transientAwareRegistrationResult:(int)a2 serviceMaskTuple:(struct CLClientServiceTypeMaskTuple { unsigned long long x0; unsigned long long x1; })a3 authorizedForWidgetUpdates:(BOOL)a4;
- (BOOL)isNonProvisionallyAuthorizedForServiceTypeMask:(unsigned long long)a0;
- (id)description;
- (BOOL)inUseLevelIsAtLeast:(int)a0;
- (BOOL)isNonProvisionallyAuthorizedForServiceType:(unsigned long long)a0;

@end

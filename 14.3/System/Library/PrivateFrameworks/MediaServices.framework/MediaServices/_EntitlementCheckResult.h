@class NSError, NSString;

@interface _EntitlementCheckResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *entitlement;
@property (nonatomic, getter=isEntitled) BOOL entitled;

- (void).cxx_destruct;
- (id)initWithEntitlement:(id)a0 group:(id)a1;

@end

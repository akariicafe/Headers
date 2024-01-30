@class NSString, NSUserActivity;

@interface REElementUserActivityAction : REElementAction

@property (readonly, copy, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSString *applicationID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)_performWithContext:(id)a0;
- (void)_submitMetricsWithSuccess:(BOOL)a0;
- (id)initWithUserActivity:(id)a0 applicationID:(id)a1;

@end

@interface REElementUserActivityShortcutAction : REElementUserActivityAction

@property (readonly, nonatomic) BOOL isLocalDonation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_submitMetricsWithSuccess:(BOOL)a0;
- (id)initWithUserActivity:(id)a0 applicationID:(id)a1 isLocalDonation:(BOOL)a2;

@end

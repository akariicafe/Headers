@class NSDate;

@interface RERelevanceProviderManagerScheduledUpdate : RERelevanceProviderManagerUpdate

@property (readonly, nonatomic) NSDate *updateDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithProvider:(id)a0 updateDate:(id)a1;

@end

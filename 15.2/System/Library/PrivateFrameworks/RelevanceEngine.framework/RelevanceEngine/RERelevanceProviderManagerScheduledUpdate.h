@class NSDate;

@interface RERelevanceProviderManagerScheduledUpdate : RERelevanceProviderManagerUpdate

@property (readonly, nonatomic) NSDate *updateDate;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithProvider:(id)a0 updateDate:(id)a1;

@end

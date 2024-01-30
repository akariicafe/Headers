@class WebSecurityOrigin;

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (id)initWithOrigin:(id)a0;
- (unsigned long long)usage;
- (unsigned long long)quota;
- (id)origin;
- (void)setQuota:(unsigned long long)a0;

@end

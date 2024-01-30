@class WebSecurityOrigin;

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (unsigned long long)usage;
- (unsigned long long)quota;
- (id)origin;
- (void)setQuota:(unsigned long long)a0;
- (id)initWithOrigin:(id)a0;

@end

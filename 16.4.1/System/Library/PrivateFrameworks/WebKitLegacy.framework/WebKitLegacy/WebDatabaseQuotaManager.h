@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)usage;
- (id)origin;
- (id)initWithOrigin:(id)a0;
- (unsigned long long)quota;

@end

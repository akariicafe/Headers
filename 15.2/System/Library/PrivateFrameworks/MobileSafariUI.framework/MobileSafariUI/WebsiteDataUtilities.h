@interface WebsiteDataUtilities : NSObject

+ (void)getDatabaseQuotaForOrigin:(id)a0 currentQuota:(unsigned long long)a1 currentOriginUsage:(unsigned long long)a2 currentDatabaseUsage:(unsigned long long)a3 expectedUsage:(unsigned long long)a4 dialogPresenter:(id)a5 completionHandler:(id /* block */)a6;
+ (void)getApplicationCacheQuotaForOrigin:(id)a0 currentQuota:(unsigned long long)a1 totalBytesNeeded:(unsigned long long)a2 dialogPresenter:(id)a3 completionHandler:(id /* block */)a4;

@end

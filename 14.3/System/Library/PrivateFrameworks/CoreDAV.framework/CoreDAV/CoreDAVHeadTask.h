@interface CoreDAVHeadTask : CoreDAVTask

- (unsigned long long)cachePolicy;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end

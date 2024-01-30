@interface CoreDAVHeadTask : CoreDAVTask

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (unsigned long long)cachePolicy;

@end

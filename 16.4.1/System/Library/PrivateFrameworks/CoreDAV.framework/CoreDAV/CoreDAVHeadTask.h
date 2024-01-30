@interface CoreDAVHeadTask : CoreDAVTask

- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (unsigned long long)cachePolicy;
- (id)httpMethod;

@end

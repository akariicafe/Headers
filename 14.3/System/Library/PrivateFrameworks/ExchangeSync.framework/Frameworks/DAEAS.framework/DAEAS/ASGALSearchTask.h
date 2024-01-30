@interface ASGALSearchTask : ASSearchTask

- (void)finishWithError:(id)a0;
- (id)requestBody;
- (void)performTask;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;

@end

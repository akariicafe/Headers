@interface ASGALSearchTask : ASSearchTask

- (id)requestBody;
- (void)finishWithError:(id)a0;
- (void)performTask;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;

@end

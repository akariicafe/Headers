@class NSString;

@interface TRIDevLogger : TRILogger {
    NSString *_clientProjectName;
}

- (void).cxx_destruct;
- (id)initWithClientProjectId:(int)a0;
- (void)logEvent:(id)a0;

@end

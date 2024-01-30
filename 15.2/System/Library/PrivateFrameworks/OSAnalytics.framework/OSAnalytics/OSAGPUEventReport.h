@class NSDictionary, NSString;

@interface OSAGPUEventReport : OSAReport {
    NSDictionary *_event;
    NSString *_tailspinPath;
}

- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)problemType;
- (void).cxx_destruct;
- (id)appleCareDetails;
- (id)initWithDictionary:(id)a0;
- (id)reportNamePrefix;

@end

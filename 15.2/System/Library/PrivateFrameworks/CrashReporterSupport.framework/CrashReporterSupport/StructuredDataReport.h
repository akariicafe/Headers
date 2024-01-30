@class NSString;

@interface StructuredDataReport : OSAReport {
    int _log_type;
    NSString *_raw_logfile;
}

- (BOOL)isActionable;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)problemType;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)generateCustomLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)appleCareDetails;
- (id)reportNamePrefix;
- (void)dealloc;
- (id)initWithType:(int)a0 withFile:(id)a1;

@end

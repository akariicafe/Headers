@class NSMutableDictionary, NSDictionary, NSArray, NSString;

@interface OSASubmissionPolicy : NSObject {
    NSArray *_default_template;
    NSArray *_primary_template;
    NSArray *_specific_files;
    NSString *_identifier;
    NSDictionary *_prefaces;
    NSMutableDictionary *_cadences;
    NSMutableDictionary *_cadenceThrottleCache;
    NSMutableDictionary *_results;
}

@property BOOL permissive;
@property BOOL ignoreProxies;
@property BOOL usingCellular;
@property (readonly) BOOL hasTasking;
@property (readonly) NSDictionary *latestResults;
@property (readonly) NSMutableDictionary *scanOptions;

+ (struct { double x0; double x1; BOOL x2; })guardingWindow;

- (BOOL)pastDue;
- (void)persist;
- (void).cxx_destruct;
- (id)init;
- (id)_loadPreviousResults;
- (id)getCadence:(id)a0;
- (BOOL)shouldConsiderCadence:(id)a0;
- (double)secondsAgo:(id)a0;
- (id)shouldSubmitRouting:(id)a0;
- (id)initWithTemplate:(id)a0 options:(id)a1;
- (double)intervalForCadence:(id)a0;
- (id)buildSubmissionTemplateForConfig:(id)a0;
- (void)registerRouting:(id)a0 result:(BOOL)a1;
- (struct { double x0; double x1; BOOL x2; })calcNextWindow;

@end

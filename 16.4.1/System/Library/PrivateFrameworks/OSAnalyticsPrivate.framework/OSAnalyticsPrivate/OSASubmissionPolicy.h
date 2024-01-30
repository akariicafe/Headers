@class NSMutableDictionary, NSDictionary, NSArray, NSMutableSet, NSString;

@interface OSASubmissionPolicy : NSObject {
    NSArray *_default_template;
    NSArray *_primary_template;
    NSMutableSet *_allowOptOutByRouting;
    NSArray *_specific_files;
    NSString *_identifier;
    NSDictionary *_prefaces;
    NSMutableDictionary *_results;
}

@property BOOL ignoreProxies;
@property (readonly) BOOL hasTasking;
@property (readonly) NSDictionary *latestResults;
@property (readonly) NSMutableDictionary *scanOptions;

- (void)persist;
- (id)_loadPreviousResults;
- (id)shouldSubmitRouting:(id)a0;
- (id)init;
- (void)registerRouting:(id)a0 result:(BOOL)a1;
- (id)buildSubmissionTemplateForConfig:(id)a0;
- (id)initWithTemplate:(id)a0 options:(id)a1;
- (void).cxx_destruct;

@end

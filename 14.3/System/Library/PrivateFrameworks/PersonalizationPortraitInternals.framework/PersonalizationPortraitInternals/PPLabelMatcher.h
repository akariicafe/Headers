@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;
- (id)_generateMap;

@end

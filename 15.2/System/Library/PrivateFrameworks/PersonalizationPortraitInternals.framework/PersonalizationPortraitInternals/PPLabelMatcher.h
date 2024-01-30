@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_generateMap;

@end

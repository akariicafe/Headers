@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (id)_generateMap;
- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end

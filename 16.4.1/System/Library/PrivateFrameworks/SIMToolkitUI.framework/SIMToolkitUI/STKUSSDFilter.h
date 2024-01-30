@class NSArray, NSMutableDictionary;

@interface STKUSSDFilter : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *cachedExpressions;

@property (readonly, copy, nonatomic) NSArray *alwaysFilteredPatterns;
@property (readonly, copy, nonatomic) NSArray *sometimesFilteredPatterns;
@property (nonatomic) double lastWarningTime;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)shouldFilterString:(id)a0 coalescable:(BOOL *)a1;
- (id)_matchesInString:(id)a0 forPattern:(id)a1;
- (id)initWithAlwaysFilteredPatterns:(id)a0 sometimesFilteredPatterns:(id)a1;

@end

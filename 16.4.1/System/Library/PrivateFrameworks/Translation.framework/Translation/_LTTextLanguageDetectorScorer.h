@class NSArray, NSMutableArray, NSLocale;

@interface _LTTextLanguageDetectorScorer : NSObject {
    NSMutableArray *_items;
    NSArray *_supportedLocales;
}

@property (readonly, nonatomic) BOOL hasWeightedLocale;
@property (readonly, copy, nonatomic) NSLocale *weightedLocale;

- (void).cxx_destruct;
- (void)append:(id)a0 recognizer:(id)a1;
- (id)initWithSupportedLocales:(id)a0;

@end

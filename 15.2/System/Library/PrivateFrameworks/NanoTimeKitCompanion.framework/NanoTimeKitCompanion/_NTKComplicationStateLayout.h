@class NTKComplicationLayoutRule, NSMutableDictionary;

@interface _NTKComplicationStateLayout : NSObject {
    NSMutableDictionary *_overrideRules;
}

@property (retain, nonatomic) NTKComplicationLayoutRule *defaultRule;

- (void).cxx_destruct;
- (void)setRule:(id)a0 forLayoutOverride:(long long)a1;
- (id)ruleForLayoutOverride:(long long)a0;

@end

@class NTKComplicationLayoutRule, NSMutableDictionary;

@interface _NTKComplicationStateLayout : NSObject {
    NSMutableDictionary *_overrideRules;
}

@property (retain, nonatomic) NTKComplicationLayoutRule *defaultRule;

- (void).cxx_destruct;
- (id)ruleForLayoutOverride:(long long)a0;
- (void)setRule:(id)a0 forLayoutOverride:(long long)a1;

@end

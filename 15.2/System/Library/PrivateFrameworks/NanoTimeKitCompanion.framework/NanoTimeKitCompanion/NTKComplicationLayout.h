@class NSMutableArray;

@interface NTKComplicationLayout : NSObject {
    NSMutableArray *_stateLayouts;
}

+ (id)layoutWithDefaultRule:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)setDefaultLayoutRule:(id)a0 forState:(long long)a1;
- (void)setOverrideLayoutRule:(id)a0 forState:(long long)a1 layoutOverride:(long long)a2;
- (id)defaultLayoutRuleForState:(long long)a0;
- (id)_layoutForState:(long long)a0;
- (id)layoutRuleForComplicationState:(long long)a0 layoutOverride:(long long)a1;

@end

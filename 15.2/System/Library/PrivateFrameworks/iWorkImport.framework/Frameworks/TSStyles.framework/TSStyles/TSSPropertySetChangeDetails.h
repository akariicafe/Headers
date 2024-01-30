@class TSSMutablePropertySet, TSSPropertySet;

@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet *mChangedProperties;
}

@property (readonly, nonatomic) TSSPropertySet *changedProperties;

- (void).cxx_destruct;
- (id)init;
- (void)addChangedProperty:(int)a0;
- (id)initWithChangedProperties:(id)a0;
- (void)addChangedProperties:(id)a0;

@end

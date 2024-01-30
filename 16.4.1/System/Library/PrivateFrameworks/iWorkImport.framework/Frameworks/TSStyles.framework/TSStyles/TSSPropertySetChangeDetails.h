@class TSSMutablePropertySet, TSSPropertySet;

@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet *mChangedProperties;
}

@property (readonly, nonatomic) TSSPropertySet *changedProperties;

- (id)init;
- (void).cxx_destruct;
- (void)addChangedProperty:(int)a0;
- (void)addChangedProperties:(id)a0;
- (id)initWithChangedProperties:(id)a0;

@end

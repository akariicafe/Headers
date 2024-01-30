@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet *mChangedProperties;
}

- (id)changedProperties;
- (id)init;
- (void)dealloc;
- (void)addChangedProperty:(int)a0;
- (id)initWithChangedProperties:(id)a0;
- (void)addChangedProperties:(id)a0;

@end

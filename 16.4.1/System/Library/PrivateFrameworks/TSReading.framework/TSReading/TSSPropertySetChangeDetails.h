@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet *mChangedProperties;
}

- (void)dealloc;
- (id)init;
- (id)changedProperties;
- (void)addChangedProperty:(int)a0;
- (void)addChangedProperties:(id)a0;
- (id)initWithChangedProperties:(id)a0;

@end

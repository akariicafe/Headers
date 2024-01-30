@class NSString, TSDModifyPrototypeChange;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource> {
    TSDModifyPrototypeChange *mChange;
    BOOL mAfterChange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForProperty:(int)a0;
- (BOOL)containsProperty:(int)a0;
- (float)floatValueForProperty:(int)a0;
- (double)CGFloatValueForProperty:(int)a0;
- (id)boxedObjectForProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (id)initWithPrototypeChange:(id)a0 afterChange:(BOOL)a1;
- (int)intValueForProperty:(int)a0;
- (id)p_propertyMap;

@end

@class NSMutableArray, NTKPigmentEditOptionArray;

@interface NTKFaceEditColorPickerConfiguration : NSObject {
    NSMutableArray *_legacyColors;
}

@property (readonly, nonatomic) NTKPigmentEditOptionArray *editableColors;
@property (readonly, nonatomic) NTKPigmentEditOptionArray *nonEditableColors;
@property (nonatomic) BOOL canAddColors;
@property (readonly, nonatomic) unsigned long long numberOfColors;
@property (readonly, nonatomic) BOOL hasSeparator;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)indexOfColor:(id)a0;
- (void)addLegacyColor:(id)a0;
- (void)insertNonEditableColor:(id)a0 atIndex:(unsigned long long)a1;
- (void)addEditableColor:(id)a0;
- (void)addNonEditableColor:(id)a0;
- (id)colorAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfLegacyColor:(id)a0;
- (void)insertEditableColor:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertLegacyColor:(id)a0 atIndex:(unsigned long long)a1;
- (id)legacyColorAtIndex:(unsigned long long)a0;
- (id)legacyColors;
- (void)removeEditableColor:(id)a0;
- (void)removeEditableColorAtIndex:(unsigned long long)a0;
- (void)removeLegacyColor:(id)a0;
- (void)removeLegacyColorAtIndex:(unsigned long long)a0;
- (void)removeNonEditableColor:(id)a0;
- (void)removeNonEditableColorAtIndex:(unsigned long long)a0;

@end

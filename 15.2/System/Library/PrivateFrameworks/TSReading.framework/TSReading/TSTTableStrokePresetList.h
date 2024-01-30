@class TSTTableStrokePresetData;

@interface TSTTableStrokePresetList : NSObject {
    unsigned long long mCount;
    TSTTableStrokePresetData *mPresets[15];
}

+ (id)init;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)a0 verticalStroke:(id)a1 exteriorStroke:(id)a2;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetIndex:(unsigned long long)a0 colors:(id)a1;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)a0 andThinStroke:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (void)setStrokePreset:(id)a0 atIndex:(unsigned long long)a1;
- (id)presetAtIndex:(unsigned long long)a0;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (void)setStroke:(id)a0 forPresetIndex:(unsigned long long)a1;

@end

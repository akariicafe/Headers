@class NSPointerArray;

@interface TSTTableStrokePresetList : NSObject {
    unsigned long long mCount;
}

@property (retain, nonatomic) NSPointerArray *presets;

+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)a0 verticalStroke:(id)a1 exteriorStroke:(id)a2;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)a0 andThinStroke:(id)a1;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetID:(unsigned long long)a0 colors:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)setStrokePreset:(id)a0 atIndex:(unsigned long long)a1;
- (id)presetAtIndex:(unsigned long long)a0;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (void)setStroke:(id)a0 forPresetIndex:(unsigned long long)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned int)maskForStrokePresets:(id)a0;

@end

@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (int)type;
- (id)adjustments;
- (void)setType:(int)a0;
- (int)presetType;
- (void)setPresetType:(int)a0;
- (void)addAdjustment:(id)a0;

@end

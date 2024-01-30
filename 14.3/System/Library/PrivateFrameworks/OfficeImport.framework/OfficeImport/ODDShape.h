@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (id)description;
- (int)type;
- (id)adjustments;
- (int)presetType;
- (void)setPresetType:(int)a0;
- (void)addAdjustment:(id)a0;

@end

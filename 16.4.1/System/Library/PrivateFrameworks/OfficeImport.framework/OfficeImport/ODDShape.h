@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (int)type;
- (void)setType:(int)a0;
- (int)presetType;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)adjustments;
- (void)addAdjustment:(id)a0;
- (void)setPresetType:(int)a0;

@end

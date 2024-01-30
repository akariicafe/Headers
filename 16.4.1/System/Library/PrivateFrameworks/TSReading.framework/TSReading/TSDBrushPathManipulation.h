@class NSMutableDictionary, NSMutableArray;

@interface TSDBrushPathManipulation : TSDPathManipulation {
    struct CGPath { } *mBrushStroke;
    double mRepeatLength;
    NSMutableDictionary *mSections;
    NSMutableArray *mMiddleSections;
    NSMutableArray *mSmallSections;
    double mSmallLimitWidth;
    BOOL mSplitAtSharpAngles;
}

@end

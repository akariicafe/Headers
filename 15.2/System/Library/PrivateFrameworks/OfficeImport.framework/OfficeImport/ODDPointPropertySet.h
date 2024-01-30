@class NSString, NSObject;

@interface ODDPointPropertySet : NSObject {
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    BOOL mCustomVerticalFlip;
    double mCustomScaleX;
    double mCustomScaleY;
    double mCustomOffsetX;
    double mCustomOffsetY;
}

- (id)description;
- (void).cxx_destruct;
- (id)layoutTypeId;
- (void)setLayoutTypeId:(id)a0;
- (id)presentationName;
- (void)setPresentationName:(id)a0;
- (id)presentationStyleLabel;
- (void)setPresentationStyleLabel:(id)a0;
- (int)presentationStyleIndex;
- (void)setPresentationStyleIndex:(int)a0;
- (int)presentationStyleCount;
- (void)setPresentationStyleCount:(int)a0;
- (id)presentationAssociatedId;
- (void)setPresentationAssociatedId:(id)a0;
- (BOOL)customVerticalFlip;
- (void)setCustomVerticalFlip:(BOOL)a0;
- (double)customScaleX;
- (void)setCustomScaleX:(double)a0;
- (double)customScaleY;
- (void)setCustomScaleY:(double)a0;
- (double)customOffsetX;
- (void)setCustomOffsetX:(double)a0;
- (double)customOffsetY;
- (void)setCustomOffsetY:(double)a0;

@end

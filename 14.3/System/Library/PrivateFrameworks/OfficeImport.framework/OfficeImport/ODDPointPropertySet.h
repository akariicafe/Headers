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

- (void).cxx_destruct;
- (id)description;
- (id)layoutTypeId;
- (void)setPresentationName:(id)a0;
- (id)presentationName;
- (id)presentationStyleLabel;
- (int)presentationStyleIndex;
- (double)customScaleX;
- (double)customScaleY;
- (double)customOffsetX;
- (double)customOffsetY;
- (void)setLayoutTypeId:(id)a0;
- (void)setPresentationStyleLabel:(id)a0;
- (void)setPresentationStyleIndex:(int)a0;
- (int)presentationStyleCount;
- (void)setPresentationStyleCount:(int)a0;
- (id)presentationAssociatedId;
- (void)setPresentationAssociatedId:(id)a0;
- (BOOL)customVerticalFlip;
- (void)setCustomVerticalFlip:(BOOL)a0;
- (void)setCustomScaleX:(double)a0;
- (void)setCustomScaleY:(double)a0;
- (void)setCustomOffsetX:(double)a0;
- (void)setCustomOffsetY:(double)a0;

@end

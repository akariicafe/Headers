@class NSDate;

@interface CXAnswerCallAction : CXCallAction {
    struct CGSize { double width; double height; } _localPortraitAspectRatio;
    struct CGSize { double width; double height; } _localLandscapeAspectRatio;
}

@property (copy, nonatomic) NSDate *dateConnected;
@property (nonatomic) BOOL downgradeToAudio;

+ (double)timeout;
+ (BOOL)supportsSecureCoding;

- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (id)customDescription;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })localLandscapeAspectRatio;
- (void)fulfill;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })localPortraitAspectRatio;
- (void)encodeWithCoder:(id)a0;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)fulfillWithDateConnected:(id)a0;
- (void)updateAsFulfilledWithDateConnected:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end

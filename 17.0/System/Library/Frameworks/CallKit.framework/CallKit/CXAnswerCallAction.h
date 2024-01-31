@class NSDate;

@interface CXAnswerCallAction : CXCallAction {
    struct CGSize { double width; double height; } _localPortraitAspectRatio;
    struct CGSize { double width; double height; } _localLandscapeAspectRatio;
}

@property (copy, nonatomic) NSDate *dateConnected;
@property (nonatomic) BOOL downgradeToAudio;
@property (nonatomic) BOOL pauseVideoToStart;
@property (nonatomic) BOOL screening;

+ (BOOL)supportsSecureCoding;
+ (double)timeout;

- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })localPortraitAspectRatio;
- (id)customDescription;
- (void).cxx_destruct;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })localLandscapeAspectRatio;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (void)fulfillWithDateConnected:(id)a0;
- (void)updateAsFulfilledWithDateConnected:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end

@class NSString, MPUNotificationObserver, UILabel;

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint {
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;
    double _textStyleDefaultLeading;
    BOOL _isBaselineConstraint;
    BOOL _isLineNumberConstraint;
    unsigned long long _numberOfLines;
    UILabel *_targetLabel;
}

@property (nonatomic) double fontSizeMultiplier;
@property (nonatomic) double defaultSizeConstant;
@property (copy, nonatomic) NSString *textStyle;

+ (id)constraintWithAutoupdatingBaselineOfView:(id)a0 relation:(long long)a1 toView:(id)a2 attribute:(long long)a3 withTextStyle:(id)a4 multiplier:(double)a5 nonStandardLeading:(double)a6;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)a0 toView:(id)a1 attribute:(long long)a2 withTextStyle:(id)a3 nonStandardLeading:(double)a4;
+ (id)contentSizeAutoupdatingConstraintWithItem:(id)a0 attribute:(long long)a1 relatedBy:(long long)a2 toItem:(id)a3 attribute:(long long)a4 multiplier:(double)a5 textStyle:(id)a6 defaultSizeConstant:(double)a7;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)a0 relation:(long long)a1 toView:(id)a2 attribute:(long long)a3 withTextStyle:(id)a4 nonStandardLeading:(double)a5;
+ (id)constraintWithItem:(id)a0 attribute:(long long)a1 relatedBy:(long long)a2 toItem:(id)a3 attribute:(long long)a4 multiplier:(double)a5 autoupdatingConstantFromLabel:(id)a6 textStyle:(id)a7 numberOfLines:(unsigned long long)a8;

- (void)_updatePreferredContentSize;
- (void).cxx_destruct;

@end

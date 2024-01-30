@class UILabel, NSArray, NSString;
@protocol HUControlViewDelegate;

@interface HUTemperatureUnitControlView : UIView <HUControlView>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (nonatomic) long long currentUnit;
@property (nonatomic) BOOL viewDisabled;
@property (copy, nonatomic) NSArray *labelConstraints;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL canBeHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;

@end

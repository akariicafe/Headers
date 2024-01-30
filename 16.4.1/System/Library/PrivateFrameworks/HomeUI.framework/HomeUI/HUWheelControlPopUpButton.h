@class NSArray, NSFormatter, NSString;
@protocol HUControlViewDelegate;

@interface HUWheelControlPopUpButton : UIButton <HUControlView>

@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSFormatter *valueFormatter;
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

- (void).cxx_destruct;
- (id)_createMenu;

@end

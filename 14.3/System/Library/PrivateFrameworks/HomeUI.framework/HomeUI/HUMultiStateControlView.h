@class NSString, UISegmentedControl, NSMutableArray;
@protocol HUControlViewDelegate;

@interface HUMultiStateControlView : UIView <HUControlView>

@property (readonly, nonatomic) UISegmentedControl *segmentedControl;
@property (readonly, nonatomic) NSMutableArray *possibleValues;
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

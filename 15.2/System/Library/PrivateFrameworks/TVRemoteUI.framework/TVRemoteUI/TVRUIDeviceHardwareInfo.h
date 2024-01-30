@interface TVRUIDeviceHardwareInfo : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } userIntentButtonRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } volumeUpButtonRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } volumeDownButtonRect;
@property (nonatomic) double volumeTotalHeight;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } volumeButtonsCenterPoint;
@property (readonly, nonatomic) double totalHeight;
@property (readonly, nonatomic) unsigned int volumeButtonsEdge;
@property (readonly, nonatomic) unsigned int userIntentButtonEdge;

- (id)description;
- (id)initWithUserIntentButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 volumeUpButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 volumeDownButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 volumeTotalHeight:(double)a3;

@end

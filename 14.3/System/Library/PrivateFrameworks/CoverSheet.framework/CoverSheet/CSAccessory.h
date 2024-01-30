@class NSString, UIColor;

@interface CSAccessory : NSObject

@property (retain, nonatomic) NSString *endpointUUID;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) BOOL shouldLockScreenWhenAttached;
@property (readonly, nonatomic) BOOL shouldDelayAnimation;
@property (readonly, nonatomic) BOOL shouldShowAnimation;
@property (readonly, nonatomic) BOOL chimeOnDetach;
@property (readonly, nonatomic) BOOL hasStaticView;
@property (readonly, nonatomic, getter=isWindowed) BOOL windowed;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleScreenCoordinates;

+ (id)accessoryWithType:(long long)a0 primaryColor:(id)a1 secondoryColor:(id)a2;

- (void).cxx_destruct;
- (id)accessoryTypeString;
- (id)initWithDictionary:(id)a0 endpointUUID:(id)a1;
- (id)description;
- (long long)accessoryTypeFromDictionary:(id)a0;
- (id)colorForP3ColorData:(id)a0;

@end

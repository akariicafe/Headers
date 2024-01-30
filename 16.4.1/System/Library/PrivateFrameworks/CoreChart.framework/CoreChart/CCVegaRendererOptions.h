@class NSObject, NSString, NSCalendar, NSLocale, CALayer, UITraitCollection;
@protocol CCVegaRendererDelegate;

@interface CCVegaRendererOptions : NSObject

@property (retain) NSString *baseConfig;
@property double scaleFactor;
@property double zoomFactor;
@property struct CGSize { double width; double height; } size;
@property (retain) NSLocale *locale;
@property (retain) NSCalendar *calendar;
@property (retain) UITraitCollection *traitCollection;
@property unsigned int renderer;
@property (retain) CALayer *caLayer;
@property BOOL caUpdateFromBackground;
@property (weak) NSObject<CCVegaRendererDelegate> *delegate;

- (id)init;
- (void).cxx_destruct;

@end

@class UIColor;

@interface NWKUIAQISegmentModel : NSObject

@property (readonly) UIColor *color;
@property (readonly, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 active:(BOOL)a1;

@end

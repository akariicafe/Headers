@class NSString, NSDictionary;

@interface CCVegaColorOrGradient : NSObject <CCVegaColorOrGradientInterface>

@property (retain) NSString *color;
@property (retain) NSDictionary *gradient;
@property (readonly) BOOL isGradient;
@property (readonly) BOOL isColor;

- (void).cxx_destruct;
- (id)initWithJSValue:(id)a0;

@end

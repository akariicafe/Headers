@class NSArray;

@interface CLKComplicationBackgroundDescriptor : NSObject

@property (readonly, copy, nonatomic) NSArray *backgroundColors;
@property (readonly, copy, nonatomic) NSArray *backgroundLocations;
@property (readonly, nonatomic) long long style;

- (void).cxx_destruct;
- (id)initWithBackgroundColor:(id)a0;
- (id)initWithClearBackground;
- (id)initWithGradientBackgroundColors:(id)a0;
- (id)initWithMaterialBackground;
- (id)initWithGradientBackgroundColors:(id)a0 locations:(id)a1;

@end

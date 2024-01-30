@interface WFPlatformColorDefinition : NSObject

@property (readonly, nonatomic) BOOL isDarkMode;
@property (readonly, nonatomic) BOOL isHighContrast;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;

- (id)initWithDarkMode:(BOOL)a0 highContrast:(BOOL)a1 red:(double)a2 green:(double)a3 blue:(double)a4 alpha:(double)a5;

@end

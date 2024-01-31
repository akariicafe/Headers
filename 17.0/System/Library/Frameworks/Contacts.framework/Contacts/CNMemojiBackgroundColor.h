@interface CNMemojiBackgroundColor : NSObject

@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;

+ (id)log;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithColorDescription:(id)a0 alpha:(double)a1;
- (id)initWithColorDescription:(id)a0;
- (id)initWithDefaultColorWithAlpha:(double)a0;

@end

@class UIColor, NSArray;

@interface NWMUltravioletIndexCategoryColor : NSObject

@property (class, readonly, nonatomic) UIColor *low;
@property (class, readonly, nonatomic) UIColor *moderate;
@property (class, readonly, nonatomic) UIColor *high;
@property (class, readonly, nonatomic) UIColor *veryHigh;
@property (class, readonly, nonatomic) UIColor *extreme;
@property (class, readonly, nonatomic) UIColor *unknown;
@property (class, readonly, nonatomic) NSArray *spectrum;

@end

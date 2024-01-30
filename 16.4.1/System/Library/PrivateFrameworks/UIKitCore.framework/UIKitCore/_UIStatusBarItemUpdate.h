@class _UIStatusBarData, _UIStatusBarStyleAttributes, NSDictionary;

@interface _UIStatusBarItemUpdate : NSObject <NSCopying>

@property (nonatomic) BOOL enabilityChanged;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL dataChanged;
@property (retain, nonatomic) _UIStatusBarData *data;
@property (nonatomic) BOOL styleAttributesChanged;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSDictionary *placementInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end

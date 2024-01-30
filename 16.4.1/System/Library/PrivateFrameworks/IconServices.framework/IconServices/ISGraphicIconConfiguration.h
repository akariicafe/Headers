@class NSArray;

@interface ISGraphicIconConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *symbolColors;
@property (copy, nonatomic) NSArray *enclosureColors;
@property (nonatomic) long long renderingMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end

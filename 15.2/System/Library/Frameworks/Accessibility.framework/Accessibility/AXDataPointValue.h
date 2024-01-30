@class NSString;

@interface AXDataPointValue : NSObject <NSCopying>

@property (nonatomic) double number;
@property (copy, nonatomic) NSString *category;

+ (id)valueWithNumber:(double)a0;
+ (id)valueWithCategory:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

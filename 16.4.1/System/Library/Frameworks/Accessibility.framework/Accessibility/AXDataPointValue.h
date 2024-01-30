@class NSString;

@interface AXDataPointValue : NSObject <NSCopying>

@property (nonatomic) double number;
@property (copy, nonatomic) NSString *category;

+ (id)valueWithCategory:(id)a0;
+ (id)valueWithNumber:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end

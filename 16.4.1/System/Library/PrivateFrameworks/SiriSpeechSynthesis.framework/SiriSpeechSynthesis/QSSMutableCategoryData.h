@class NSString, NSArray;

@interface QSSMutableCategoryData : QSSCategoryData

@property (copy, nonatomic) NSString *category_name;
@property (copy, nonatomic) NSArray *category_data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

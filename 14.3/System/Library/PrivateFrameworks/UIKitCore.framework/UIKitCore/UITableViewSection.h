@class NSString, NSArray, UIView;

@interface UITableViewSection : NSObject <NSCoding>

@property (copy, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) UIView *headerView;
@property (copy, nonatomic) NSString *footerTitle;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) NSArray *rows;

+ (id)sectionWithRows:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

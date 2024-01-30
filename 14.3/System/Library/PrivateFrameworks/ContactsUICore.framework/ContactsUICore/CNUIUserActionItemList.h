@class NSString, UIImage, NSArray;

@interface CNUIUserActionItemList : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 type:(id)a1 icon:(id)a2;

@end

@class SKUIImageViewElement, NSString;

@interface SKUIBrowseItemComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIImageViewElement *decorationImage;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (nonatomic) long long index;
@property (nonatomic) BOOL showTopBorder;

- (long long)componentType;
- (void).cxx_destruct;
- (id)initWithViewElement:(id)a0;

@end

@class NSString, NSAttributedString;

@interface WFActionDescriptionItem : NSObject

@property (readonly, nonatomic) NSString *itemTitle;
@property (readonly, nonatomic) NSAttributedString *itemDescription;

+ (id)itemWithTitle:(id)a0 description:(id)a1;
+ (id)itemWithTitle:(id)a0 attributedDescription:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 description:(id)a1;

@end

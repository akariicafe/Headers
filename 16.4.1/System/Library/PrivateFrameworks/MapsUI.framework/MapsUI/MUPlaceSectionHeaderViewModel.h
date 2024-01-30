@class NSString, UIMenu;

@interface MUPlaceSectionHeaderViewModel : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *seeMoreButtonText;
@property (retain, nonatomic) UIMenu *seeMoreButtonMenu;

- (void).cxx_destruct;
- (id)initWithTitleString:(id)a0;
- (id)initWithTitleString:(id)a0 showSeeMore:(BOOL)a1;
- (void)setTarget:(id)a0 selector:(SEL)a1;

@end

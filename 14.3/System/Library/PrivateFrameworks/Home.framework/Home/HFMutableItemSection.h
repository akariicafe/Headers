@class NSString, NSArray, NSDictionary, NSAttributedString;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HFMutableItemSection : HFItemSection

@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerAccessoryButtonTitle;
@property (weak, nonatomic) id<HFItemSectionAccessoryButtonHeaderDelegate> headerAccessoryButtonDelegate;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) NSAttributedString *attributedFooterTitle;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)setItems:(id)a0 filteringToDisplayedItems:(id)a1;
- (void)setItemsUsingDefaultSortComparator:(id)a0;

@end

@class NSString, NAIdentity, NSDictionary, NSArray, NSAttributedString;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HFItemSection : NSObject <HFDiffableItemGroup, NSCopying, NSMutableCopying, NAIdentifiable>

@property (class, readonly, copy, nonatomic) id /* block */ defaultItemComparator;
@property (class, readonly, copy, nonatomic) id /* block */ itemResultManualSortComparator;
@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSecondaryText;
@property (copy, nonatomic) NSAttributedString *attributedHeaderTitle;
@property (copy, nonatomic) NSString *headerAccessoryButtonTitle;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) NSAttributedString *attributedFooterTitle;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<HFItemSectionAccessoryButtonHeaderDelegate> headerAccessoryButtonDelegate;
@property (nonatomic) BOOL hideAccessoryButton;
@property (nonatomic) BOOL hideHeaderText;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly, copy, nonatomic) NSArray *diffableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterSections:(id)a0 toDisplayedItems:(id)a1;

- (id)initWithIdentifier:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createCopyMutable:(BOOL)a0;

@end

@class NSString, NSArray, UIImage;
@protocol CNUINavigationListItemContent;

@interface CNUINavigationListItem : NSObject <CNUINavigationListItemContent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<CNUINavigationListItemContent> content;
@property (weak, nonatomic) CNUINavigationListItem *parent;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (weak, nonatomic) CNUINavigationListItem *defaultItem;
@property (retain, nonatomic) NSArray *items;

+ (id)faceTimeNavigationListItemsForUserActionListModel:(id)a0;
+ (id)favoritesNavigationListItemsForUserActionListModel:(id)a0;
+ (id)itemForActionItem:(id)a0 isGrouped:(BOOL)a1;
+ (id)localizedLabelForActionItem:(id)a0 usingPropertyLabel:(BOOL)a1;
+ (id)navigationListItemForContactProperty:(id)a0;
+ (id)navigationListItemsForUserActionListModel:(id)a0;

@end

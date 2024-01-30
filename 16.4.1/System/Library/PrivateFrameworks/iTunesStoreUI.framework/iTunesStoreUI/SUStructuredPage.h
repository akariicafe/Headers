@class SUItem, SUPageSectionGroup, SUItemList, NSString, SUStorePageProtocol;

@interface SUStructuredPage : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL hasDisplayableContent;
@property (retain, nonatomic) SUItem *item;
@property (retain, nonatomic) SUItemList *itemList;
@property (retain, nonatomic) SUPageSectionGroup *sectionsGroup;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL artworkShouldFitWidth;
@property (readonly, nonatomic) double artworkWidth;
@property (readonly, nonatomic) long long displayStyle;
@property (readonly, nonatomic) BOOL shouldHideSignInButton;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL wantsIndexBar;
@property (readonly, nonatomic) BOOL didShowDialog;
@property (retain, nonatomic) SUStorePageProtocol *protocol;

+ (long long)pageTypeForStorePageDictionary:(id)a0;
+ (long long)pageTypeForStorePageString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)loadFromDictionary:(id)a0;
- (id)_copyItemFromDictionary:(id)a0;
- (long long)_displayStyleForString:(id)a0;
- (void)_parseItemsFromDictionary:(id)a0;
- (void)_parseProtocolFromDictionary:(id)a0;
- (void)_parseTemplateParametersFromDictionary:(id)a0;

@end

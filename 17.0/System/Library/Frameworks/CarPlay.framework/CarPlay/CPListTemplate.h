@class NSArray, NAFuture, NSMutableSet, NSString, CPAssistantCellConfiguration, CPBarButton;
@protocol CPListTemplateDelegate;

@interface CPListTemplate : CPTemplate <CPListClientTemplateDelegate, CPBarButtonProviding>

@property (class, readonly, nonatomic) unsigned long long maximumItemCount;
@property (class, readonly, nonatomic) unsigned long long maximumSectionCount;

@property (retain, nonatomic) NSMutableSet *itemsToReload;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (weak, nonatomic) id<CPListTemplateDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long sectionCount;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (copy, nonatomic) NSArray *emptyViewTitleVariants;
@property (copy, nonatomic) NSArray *emptyViewSubtitleVariants;
@property (retain, nonatomic) CPAssistantCellConfiguration *assistantCellConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)performUpdate;
- (id)initWithCoder:(id)a0;
- (void)updateSections:(id)a0;
- (id)initWithTitle:(id)a0 sections:(id)a1;
- (id)indexPathForItem:(id)a0;
- (void)_setItemNeedsUpdate:(id)a0;
- (id)_itemForHostItemWithIdentifier:(id)a0;
- (void)_linkItemsInSection:(id)a0;
- (id)_sectionsByTrimmingAndLinkingSections:(id)a0;
- (void)handleActionForControlIdentifier:(id)a0;
- (id)initWithTitle:(id)a0 sections:(id)a1 assistantCellConfiguration:(id)a2;
- (void)listTemplateWithIdentifier:(id)a0 didSelectImageAtIndex:(unsigned long long)a1 inImageRowItemWithIdentifier:(id)a2;
- (void)listTemplateWithIdentifier:(id)a0 didSelectListItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateHeaderImage:(id)a0 forSectionIdentifier:(id)a1;

@end

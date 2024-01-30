@class UIMenu, NSString, NSArray, SFBannerModel;

@interface SFSectionModel : NSObject {
    id /* block */ _configurationProvider;
}

@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) SFBannerModel *contentBanner;
@property (readonly, nonatomic) id /* block */ siteIconConfigurationProvider;
@property (readonly, nonatomic) id /* block */ siteCardConfigurationProvider;
@property (readonly, nonatomic) id /* block */ richLinkConfigurationProvider;
@property (readonly, nonatomic) id /* block */ siteRowConfigurationProvider;
@property (readonly, nonatomic) id identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) SFBannerModel *banner;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsed;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsedInCompactWidth;
@property (copy, nonatomic) UIMenu *titleMenu;
@property (nonatomic) BOOL usesLargeTitle;
@property (copy, nonatomic) id /* block */ contextMenuProvider;
@property (copy, nonatomic) id /* block */ contextMenuCommitHandler;
@property (copy, nonatomic) id /* block */ contextMenuDismissHandler;
@property (copy, nonatomic) id /* block */ dragItemProvider;
@property (copy, nonatomic) id /* block */ dropOperationProvider;
@property (copy, nonatomic) id /* block */ dropHandler;

+ (id)toggleExpandedAction;
+ (id)siteCardSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)siteIconSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)siteCardSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)richLinkSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)bannerSectionWithIdentifier:(id)a0 title:(id)a1 banner:(id)a2;
+ (id)footerSectionWithIdentifier:(id)a0 action:(id)a1;
+ (id)bannerSectionWithIdentifier:(id)a0 banner:(id)a1;
+ (id)siteRowSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)siteIconSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)richLinkSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)siteRowSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;

- (id)initWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 itemType:(long long)a4 itemIdentifiers:(id)a5 configurationProvider:(id /* block */)a6;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

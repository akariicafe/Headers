@class NSString, NSArray, _SFBannerModel;

@interface _SFSectionModel : NSObject {
    id /* block */ _configurationProvider;
}

@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) _SFBannerModel *contentBanner;
@property (readonly, nonatomic) id /* block */ siteIconConfigurationProvider;
@property (readonly, nonatomic) id /* block */ siteCardConfigurationProvider;
@property (readonly, nonatomic) id identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) _SFBannerModel *banner;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsed;
@property (copy, nonatomic) id /* block */ contextMenuProvider;
@property (copy, nonatomic) id /* block */ contextMenuCommitHandler;

+ (id)bannerSectionWithIdentifier:(id)a0 banner:(id)a1;
+ (id)siteIconSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)siteCardSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 itemType:(long long)a4 itemIdentifiers:(id)a5 configurationProvider:(id /* block */)a6;

@end

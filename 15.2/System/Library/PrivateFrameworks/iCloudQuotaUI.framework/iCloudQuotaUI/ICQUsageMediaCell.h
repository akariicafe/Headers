@class MPArtworkCatalog;

@interface ICQUsageMediaCell : PSUsageBundleCell {
    MPArtworkCatalog *_artworkCatalog;
}

- (id)blankIcon;
- (id)getLazyIconID;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)getLazyIcon;

@end

@class MPArtworkCatalog;

@interface ICQUsageMediaCell : PSUsageBundleCell {
    MPArtworkCatalog *_artworkCatalog;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)blankIcon;
- (id)getLazyIcon;
- (void).cxx_destruct;
- (id)getLazyIconID;

@end

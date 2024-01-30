@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {
    MPArtworkCatalog *_catalog;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithArtworkCatalog:(id)a0;
- (id)initWithArtworkCatalog:(id)a0 allowsNetworking:(BOOL)a1;

@end

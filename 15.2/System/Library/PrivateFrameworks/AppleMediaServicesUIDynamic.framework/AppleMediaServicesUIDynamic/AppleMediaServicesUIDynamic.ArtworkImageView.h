@interface AppleMediaServicesUIDynamic.ArtworkImageView : UIView {
    void /* unknown type, empty encoding */ artworkSize;
    void /* unknown type, empty encoding */ darkArtwork;
    void /* unknown type, empty encoding */ lightArtwork;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ underlyingImageView;
}

@property (nonatomic, readonly) BOOL amsuid_wantsArtworkStyle;
@property (nonatomic, readonly) BOOL hasContent;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end

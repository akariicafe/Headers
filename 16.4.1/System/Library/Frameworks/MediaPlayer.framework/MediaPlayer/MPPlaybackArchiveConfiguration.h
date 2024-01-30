@interface MPPlaybackArchiveConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } preferredArtworkSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPreferredArtworkSize:(struct CGSize { double x0; double x1; })a0;

@end

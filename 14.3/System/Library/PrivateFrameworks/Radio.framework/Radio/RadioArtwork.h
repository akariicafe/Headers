@class NSURL;

@interface RadioArtwork : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pointSize;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithArtworkDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArtworkURL:(id)a0 pixelSize:(struct CGSize { double x0; double x1; })a1;

@end

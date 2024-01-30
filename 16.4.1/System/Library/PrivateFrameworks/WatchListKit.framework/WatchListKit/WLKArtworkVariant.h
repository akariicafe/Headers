@class NSURL, NSString;

@interface WLKArtworkVariant : NSObject {
    NSString *_artworkURLTemplate;
}

@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) struct CGSize { double width; double height; } artworkSize;
@property (readonly, nonatomic) long long artworkType;
@property (readonly, copy, nonatomic) NSString *format;
@property (nonatomic) BOOL supportsLayeredImage;
@property (nonatomic, getter=hasAlpha) BOOL alpha;

+ (id)artworkURLFromTemplate:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 cropCode:(id)a2 format:(id)a3;
+ (id)artworkURLFromTemplate:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 format:(id)a2;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_sizeDescription:(struct CGSize { double x0; double x1; })a0;
- (id)artworkSizeTemplateURL;
- (id)artworkURLForSize:(struct CGSize { double x0; double x1; })a0;
- (id)artworkURLForSize:(struct CGSize { double x0; double x1; })a0 cropCode:(id)a1 format:(id)a2;
- (id)artworkURLForSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1;

@end

@class NSArray, NSDictionary, NSURL, NSString, ICStoreArtworkSizeInfo;

@interface ICStoreArtworkInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sortedResponseArray;
@property (copy, nonatomic) NSArray *sortedSupportedSizesArray;
@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSArray *responseArray;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) ICStoreArtworkSizeInfo *sizeInfo;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } originalSize;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) unsigned long long imageTraits;
@property (readonly, nonatomic) NSArray *textGradient;

- (id)initWithArtworkURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)artworkURLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2;
- (id)artworkURLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2 preferP3ColorSpace:(BOOL)a3;
- (id)initWithArtworkResponseArray:(id)a0;
- (BOOL)_hasOriginalSize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGColor { } *)copyColorWithKind:(id)a0;
- (id)initWithArtworkResponseValue:(id)a0;
- (void)_sortResponseArray;
- (unsigned long long)hash;
- (void)_sortSupportedSizesArray;
- (struct CGColor { } *)colorFromStringRepresentation:(id)a0;
- (id)initWithArtworkResponseDictionary:(id)a0;

@end

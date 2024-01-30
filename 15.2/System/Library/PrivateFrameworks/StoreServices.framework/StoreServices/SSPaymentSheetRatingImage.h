@class NSString;

@interface SSPaymentSheetRatingImage : NSObject <NSCopying> {
    struct CGImage { } *_image;
}

@property (readonly) long long ratingType;
@property (readonly) BOOL tint;
@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSString *value;

- (BOOL)isServerSupplied;
- (long long)_ratingTypeForType:(id)a0;
- (id)localAssetName;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end

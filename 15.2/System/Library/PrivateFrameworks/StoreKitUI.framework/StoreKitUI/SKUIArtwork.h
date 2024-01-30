@class NSURL, NSMutableDictionary, NSString;

@interface SKUIArtwork : NSObject <SKUICacheCoding, NSSecureCoding> {
    NSURL *_url;
    NSString *_urlString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCacheRepresentation:(id)a0;
- (id)initWithArtworkDictionary:(id)a0;
- (id)_lookupDictionary;
- (id)initWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end

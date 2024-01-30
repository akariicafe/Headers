@class GEOMapItemIdentifier, NSString;

@interface VKTransitLineMarker : NSObject

@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldLocale;
@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) struct { float r; float g; float b; float a; } shieldColor;
@property (readonly, nonatomic) NSString *labelText;
@property (readonly, nonatomic) NSString *labelLocale;
@property (readonly, nonatomic) void *transitLinkID;

+ (id)markerWithFeature:(void *)a0 transitLink:(const void *)a1;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)initWithFeature:(void *)a0 transitLink:(const void *)a1;
- (void)dealloc;

@end

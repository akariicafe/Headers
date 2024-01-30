@interface NRLinkPreferences : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char linkType;

+ (id)createFromEncodedXPCDict:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNotEmpty;
- (id)copyShortDescription;
- (id)description;
- (id)initWithLinkType:(unsigned char)a0;
- (id)copyEncodedXPCDict;
- (id)copyLongDescription;

@end

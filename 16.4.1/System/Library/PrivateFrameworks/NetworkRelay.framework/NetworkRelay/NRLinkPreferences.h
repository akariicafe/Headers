@interface NRLinkPreferences : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char linkType;

+ (id)createFromEncodedXPCDict:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isNotEmpty;
- (id)copyShortDescription;
- (id)initWithLinkType:(unsigned char)a0;
- (id)copyEncodedXPCDict;
- (id)copyLongDescription;

@end

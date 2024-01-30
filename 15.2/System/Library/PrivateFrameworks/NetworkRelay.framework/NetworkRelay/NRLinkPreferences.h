@interface NRLinkPreferences : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char linkType;

+ (id)createFromEncodedXPCDict:(id)a0;

- (BOOL)isNotEmpty;
- (id)description;
- (id)copyShortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLinkType:(unsigned char)a0;
- (id)copyEncodedXPCDict;
- (id)copyLongDescription;

@end

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) int entityID;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;

- (id)entityName;
- (id)stringRepresentation;
- (id)URIRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntityType:(int)a0 entityID:(int)a1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end

@class NSString, NSDictionary, NSURL, CADObjectID;

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {
    BOOL _temporary;
    int _entityType;
    int _rowID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *entityName;
@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) int rowID;
@property (readonly, nonatomic) BOOL isTemporary;
@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) NSURL *URIRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) CADObjectID *CADObjectID;

+ (id)temporaryObjectIDWithEntityType:(int)a0;
+ (id)EKObjectIDsFromCADObjectIDs:(id)a0;
+ (id)objectIDWithCADObjectID:(id)a0;
+ (id)objectIDWithEntityType:(int)a0 rowID:(int)a1;
+ (id)objectIDWithURL:(id)a0;
+ (id)CADObjectIDsFromEKObjectIDs:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithEntityType:(int)a0 rowID:(int)a1 temporary:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class ENStableGroupID, NSData;

@interface ENGroupID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ENStableGroupID *stableGroupID;
@property (readonly, nonatomic) int generation;
@property (readonly, nonatomic) NSData *dataRepresentation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)compare:(id)a0 withResult:(long long *)a1 error:(id *)a2;
- (id)initWithStableGroupID:(id)a0 generation:(int)a1;

@end

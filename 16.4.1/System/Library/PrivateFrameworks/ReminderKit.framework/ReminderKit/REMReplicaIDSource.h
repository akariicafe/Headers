@class NSString, REMObjectID;

@interface REMReplicaIDSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *crdtID;

+ (id)crdtIDWithObjectID:(id)a0 property:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 crdtID:(id)a1;
- (id)initWithAccountID:(id)a0 objectID:(id)a1 property:(id)a2;

@end

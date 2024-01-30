@class NSString, CKMergeableValueID;

@interface CKMergeableDeltaID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *deltaIdentifier;
@property (readonly, copy, nonatomic) CKMergeableValueID *valueID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDeltaIdentifier:(id)a0 valueID:(id)a1;

@end

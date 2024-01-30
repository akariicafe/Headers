@class CKDistributedTimestampVector;

@interface CKDistributedTimestampVectorRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampVector *from;
@property (readonly, nonatomic) CKDistributedTimestampVector *to;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFrom:(id)a0 to:(id)a1;
- (BOOL)includes:(id)a0;

@end

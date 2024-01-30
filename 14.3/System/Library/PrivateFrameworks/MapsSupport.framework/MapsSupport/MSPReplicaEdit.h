@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *identifierOfAffectedRecord;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end

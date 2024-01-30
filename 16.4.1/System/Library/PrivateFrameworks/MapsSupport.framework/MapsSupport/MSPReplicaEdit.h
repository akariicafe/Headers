@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *identifierOfAffectedRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end

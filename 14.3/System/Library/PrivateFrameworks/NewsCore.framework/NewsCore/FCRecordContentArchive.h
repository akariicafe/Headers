@class PBCodable;

@interface FCRecordContentArchive : FCContentArchive {
    PBCodable *_record;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)manifest;
- (id)unarchiveIntoContentContext:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)recordBase;
- (void)encodeWithCoder:(id)a0;

@end

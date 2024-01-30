@interface HDSimpleGraphRelationship : HDSimpleGraphObject

@property (readonly, nonatomic) long long subjectID;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long objectID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithRowID:(long long)a0 subjectID:(long long)a1 type:(long long)a2 objectID:(long long)a3;
- (id)initWithRowID:(long long)a0 subjectID:(long long)a1 type:(long long)a2 objectID:(long long)a3 version:(long long)a4 slots:(unsigned long long)a5;
- (id)initWithRowID:(long long)a0 version:(long long)a1 slots:(unsigned long long)a2 deleted:(BOOL)a3;

@end

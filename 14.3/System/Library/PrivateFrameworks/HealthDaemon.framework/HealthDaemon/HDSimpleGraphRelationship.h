@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphRelationship : HDSimpleGraphObject

@property (weak, nonatomic) HDSimpleGraphNode *subject;
@property (weak, nonatomic) HDSimpleGraphNode *object;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long nameID;
@property (readonly, nonatomic) BOOL isReverseRelationship;
@property (readonly, nonatomic) long long subjectID;
@property (readonly, nonatomic) long long objectID;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithDatabase:(id)a0 rowID:(long long)a1 name:(id)a2 nameID:(long long)a3 isReverse:(BOOL)a4 subjectID:(long long)a5 subject:(id)a6 objectID:(long long)a7 object:(id)a8;
- (id)work_subjectWithError:(id *)a0;
- (id)work_databaseObjectWithError:(id *)a0;

@end

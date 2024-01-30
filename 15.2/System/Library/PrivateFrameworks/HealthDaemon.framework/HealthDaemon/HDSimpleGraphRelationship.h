@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphRelationship : HDSimpleGraphObject

@property (readonly, nonatomic) long long nameID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long subjectID;
@property (readonly, weak, nonatomic) HDSimpleGraphNode *subject;
@property (readonly, nonatomic) long long objectID;
@property (readonly, weak, nonatomic) HDSimpleGraphNode *object;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithRowID:(long long)a0;
- (id)initWithRowID:(long long)a0 nameID:(long long)a1 name:(id)a2 subjectID:(long long)a3 subject:(id)a4 objectID:(long long)a5 object:(id)a6;

@end

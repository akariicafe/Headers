@class NSString, NSArray, NSMutableArray;

@interface HDSimpleGraphNode : HDSimpleGraphObject {
    NSMutableArray *_attributes;
    BOOL _areAttributesLoaded;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *relationships;
@property (readonly, nonatomic) BOOL areAllRelationshipsLoaded;
@property (readonly, nonatomic) NSArray *attributes;

+ (id)nodeWithDatabase:(id)a0 rowID:(long long)a1 name:(id)a2 loadAttributes:(BOOL)a3 loadRelationshipsWithDepth:(long long)a4 error:(id *)a5;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDatabase:(id)a0 rowID:(long long)a1 name:(id)a2 attributes:(id)a3 relationships:(id)a4;
- (BOOL)work_loadAttributesWithError:(id *)a0;
- (BOOL)work_loadAllRelationshipsWithMaxDepth:(long long)a0 error:(id *)a1;
- (BOOL)_work_loadRelatedNodesRecursiveForRelationships:(id)a0 maxDepth:(long long)a1 currentDepth:(long long)a2 fetchType:(long long)a3 error:(id *)a4;
- (BOOL)work_loadRelationships:(id)a0 maxDepth:(long long)a1 fetchType:(long long)a2 error:(id *)a3;
- (BOOL)work_addAttribute:(id)a0 ofType:(id)a1 forKey:(id)a2 error:(id *)a3;
- (BOOL)work_addAttribute:(id)a0 ofType:(id)a1 forKeyID:(long long)a2 error:(id *)a3;
- (id)work_attributesWithError:(id *)a0;

@end

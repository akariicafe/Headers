@class NSUUID, NSMutableSet, NSMutableOrderedSet;

@interface HMBLocalZoneQueryResultRecursiveModelID : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) int parentModelIDOffset;
@property (retain, nonatomic) NSUUID *parentModelID;
@property (readonly, nonatomic) NSMutableOrderedSet *modelStack;
@property (readonly, nonatomic) NSMutableSet *returnedModels;

- (id)nextObject;
- (void).cxx_destruct;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)initWithLocalZone:(id)a0 modelID:(id)a1;

@end

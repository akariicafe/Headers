@class NSString, NSUUID, HMDCloudChange, NSMapTable;

@interface HMDCloudChangeNode : HMFObject

@property (copy, nonatomic) NSString *recordName;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSUUID *parentUuid;
@property (copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL forceDelete;
@property (readonly, nonatomic) BOOL orphaned;
@property (weak, nonatomic) HMDCloudChangeNode *parent;
@property (retain, nonatomic) HMDCloudChange *change;
@property (retain, nonatomic) NSMapTable *children;

+ (id)shortDescription;

- (id)shortDescription;
- (id)description;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithModel:(id)a0;
- (void)removeChild:(id)a0;
- (id)_initWithUUID:(id)a0 parentUUID:(id)a1 recordName:(id)a2 type:(id)a3 change:(id)a4;
- (id)initWithRecordMapping:(id)a0;
- (id)initWithChange:(id)a0;
- (id)initWithCloudRecord:(id)a0;
- (void)logChangeTreeWithIndent:(id)a0;
- (void)updateRecordMapping:(id)a0;
- (void)_updateWithModel:(id)a0;
- (void)_updateWithChange:(id)a0;
- (void)_updateWithCloudRecord:(id)a0;
- (void)deleteChildren;
- (id)_allNodesInBranch;
- (void)_markBranchOrphaned;

@end

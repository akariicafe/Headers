@class NSArray;

@interface FCModifyRecordsCommand : FCCommand

@property (copy, nonatomic) id /* block */ localRecordsGenerator;
@property (copy, nonatomic) NSArray *localRecords;
@property (nonatomic) BOOL merge;
@property (readonly, nonatomic) NSArray *t_localRecords;

+ (id)desiredKeys;
+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalRecordsGenerator:(id /* block */)a0 merge:(BOOL)a1;
- (void)handleLocalRecordsFromStream:(id)a0 internalPrivateDataContext:(id)a1 delegate:(id)a2 qualityOfService:(long long)a3;
- (void)handleBatchOfLocalRecords:(id)a0 internalPrivateDataContext:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (id)initWithLocalRecords:(id)a0 merge:(BOOL)a1;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end

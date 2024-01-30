@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand

@property (copy, nonatomic) NSArray *recordIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithRecordIDs:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (void)handleRecordIDsFromStream:(id)a0 internalPrivateDataContext:(id)a1 delegate:(id)a2 qualityOfService:(long long)a3;
- (void)handleBatchOfRecordIDs:(id)a0 internalPrivateDataContext:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end

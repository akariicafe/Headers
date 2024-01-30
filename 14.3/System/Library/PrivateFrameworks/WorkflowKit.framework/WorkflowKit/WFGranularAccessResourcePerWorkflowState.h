@class NSSet, NSMapTable, NSString;

@interface WFGranularAccessResourcePerWorkflowState : NSObject <WFAccessResourcePerWorkflowState>

@property (class, readonly, nonatomic) Class entryTypeClass;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMapTable *entriesMapTable;
@property (readonly, nonatomic) NSSet *entries;
@property (readonly, nonatomic) BOOL hasDeniedEntries;
@property (readonly, nonatomic) BOOL hasUndeterminedEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEntries:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stateByPerformingUnionWithState:(id)a0;
- (id)stateByPopulatingNotDeterminedEntriesUsingState:(id)a0;
- (id)stateBySettingUndeterminedEntriesToAuthorized:(BOOL)a0;
- (id)stateBySettingAllEntriesAsAuthorized:(BOOL)a0;

@end

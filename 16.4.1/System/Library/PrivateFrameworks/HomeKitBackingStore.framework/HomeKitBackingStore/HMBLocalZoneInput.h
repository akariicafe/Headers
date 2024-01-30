@class NSString, HMBLocalZone, HMBLocalSQLContextInputBlock;

@interface HMBLocalZoneInput : HMFObject <HMFLogging>

@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMBLocalSQLContextInputBlock *inputBlock;
@property unsigned long long stagedChangesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)abort;
- (void)dealloc;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)commitWithOptions:(id)a0 error:(id *)a1;
- (id)initWithLocalZone:(id)a0 inputBlock:(id)a1;
- (BOOL)stageRemovalForModelWithID:(id)a0 error:(id *)a1;

@end

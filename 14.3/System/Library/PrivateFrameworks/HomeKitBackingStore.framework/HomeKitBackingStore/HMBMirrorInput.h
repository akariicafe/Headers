@class HMBLocalZone, NSString, HMBLocalSQLContextInputBlock, HMFActivity;

@interface HMBMirrorInput : HMFObject <HMFLogging>

@property (readonly, weak, nonatomic) HMBLocalZone *localZone;
@property (readonly, nonatomic) HMBLocalSQLContextInputBlock *block;
@property (readonly, nonatomic) HMFActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)abort;
- (id)logIdentifier;
- (id)initWithLocalZone:(id)a0 block:(id)a1;
- (id)updateModel:(id)a0 externalID:(id)a1 externalData:(id)a2;
- (id)removeModelWithModelID:(id)a0;
- (id)removeModelWithExternalID:(id)a0;
- (id)commitWithOptions:(id)a0 error:(id *)a1;

@end

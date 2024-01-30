@class NSString, NSMutableSet;

@interface HMDSettingTransaction : NSObject <HMDSettingTransaction>

@property (readonly) NSString *transactionLabel;
@property (readonly) NSMutableSet *updateModels;
@property (readonly) NSMutableSet *removeUUIDs;
@property (readonly) BOOL initialCreation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addModel:(id)a0;
- (void).cxx_destruct;
- (void)addModelToBeUpdated:(id)a0;
- (void)addSettingModel:(id)a0;
- (id)initForInitialCreationWithTransactionLabel:(id)a0;
- (id)initWithTransactionLabel:(id)a0;
- (void)removeModelWithIdentifier:(id)a0;

@end

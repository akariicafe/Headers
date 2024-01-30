@class NSArray, NSDictionary, NTCatchUpOperationForYouFetchInfo, NSObject;
@protocol FCContentContext, FCTodayPrivateData, FCNewsAppConfiguration, NTTodayResultOperationInfoProviding, FCFeedPersonalizing;

@interface NTTodayItemOperation : FCOperation

@property (copy, nonatomic) NSArray *feedItems;
@property (retain, nonatomic) NSDictionary *resultTodayItemsBySectionDescriptor;
@property (retain, nonatomic) NSDictionary *resultAssetFileURLsByRemoteURL;
@property (retain, nonatomic) NSObject *resultRecordsHoldToken;
@property (retain, nonatomic) NSObject *resultAssetsHoldToken;
@property (copy, nonatomic) NSDictionary *catchUpOperationResultsBySectionDescriptor;
@property (copy, nonatomic) id<FCNewsAppConfiguration> appConfiguration;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) id<FCTodayPrivateData> todayData;
@property (copy, nonatomic) id<NTTodayResultOperationInfoProviding> operationInfo;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (copy, nonatomic) id /* block */ todayItemCompletion;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_extractFeedItemsFromInputs;
- (void)_saveWithCompletion:(id /* block */)a0;
- (void)_fetchProtoitemsWithCompletion:(id /* block */)a0;

@end

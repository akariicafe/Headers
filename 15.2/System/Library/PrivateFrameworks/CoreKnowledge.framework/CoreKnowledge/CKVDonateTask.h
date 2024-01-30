@class NSObject;
@protocol CKVDonatorProvider, CKVProviderDatasetBridge;

@interface CKVDonateTask : NSObject {
    NSObject<CKVDonatorProvider> *_donatorProvider;
    NSObject<CKVProviderDatasetBridge> *_bridge;
    double _timeout;
    BOOL _isMultiDataset;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDonatorProvider:(id)a0 datasetBridge:(id)a1 timeout:(double)a2;
- (id)initWithDonatorProvider:(id)a0 datasetBridge:(id)a1;
- (id)initWithDonatorProvider:(id)a0 multiDatasetBridge:(id)a1;
- (void)runWithType:(unsigned short)a0 reason:(unsigned short)a1;
- (void)_donateAllDatasets:(unsigned short)a0 withReason:(unsigned short)a1;
- (long long)_donateDataset:(id)a0 withType:(unsigned short)a1 reason:(unsigned short)a2;
- (void)clearWithReason:(unsigned short)a0;
- (void)_clearAllDatasets;
- (void)_clearDataset:(id)a0;
- (id)_getProviderBridge;

@end

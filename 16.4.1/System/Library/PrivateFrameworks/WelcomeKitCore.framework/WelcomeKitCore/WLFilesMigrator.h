@class NSString, WLFeaturePayload;

@interface WLFilesMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>

@property (copy, nonatomic) NSString *rootPath;
@property (weak, nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;

- (void)enable;
- (id)contentType;
- (id)dataType;
- (id)init;
- (void).cxx_destruct;
- (void)setState:(id)a0;
- (void)addWorkingTime:(unsigned long long)a0;
- (id)importWillBegin;
- (BOOL)accountBased;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (void)setEstimatedDataSize:(unsigned long long)a0;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;

@end

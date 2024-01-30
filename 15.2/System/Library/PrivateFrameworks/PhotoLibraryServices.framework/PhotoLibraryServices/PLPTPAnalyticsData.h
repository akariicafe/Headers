@class NSString;

@interface PLPTPAnalyticsData : NSObject

@property (copy, nonatomic) NSString *make;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *transport;
@property (nonatomic) long long cplState;
@property (nonatomic) unsigned long long libraryAssetCount;
@property (nonatomic) unsigned long long videoTranscodedCount;
@property (nonatomic) unsigned long long imageTranscodedCount;
@property (nonatomic) unsigned long long downloadedCount;
@property (nonatomic) unsigned long long deferredRenderCount;
@property (nonatomic) double timeConnected;
@property (nonatomic) double timeDisconnected;
@property (readonly, nonatomic) BOOL isComplete;

- (id)cplStateString;
- (id)description;
- (void)report;
- (void).cxx_destruct;
- (void)incrementConversionCountForAssetType:(short)a0;
- (void)updateWithHostCharacteristics:(id)a0;

@end

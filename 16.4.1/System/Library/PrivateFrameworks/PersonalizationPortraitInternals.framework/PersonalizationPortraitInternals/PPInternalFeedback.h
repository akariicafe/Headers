@class NSString;

@interface PPInternalFeedback : PPBaseFeedback <BMStoreData>

@property (nonatomic) unsigned char storeType;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromBaseFeedback:(id)a0 storeType:(unsigned char)a1;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)json;
- (id)initWithFeedbackItems:(id)a0 timestamp:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4 storeType:(unsigned char)a5 build:(id)a6;
- (id)initWithFeedbackItems:(id)a0 timestamp:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void).cxx_destruct;

@end

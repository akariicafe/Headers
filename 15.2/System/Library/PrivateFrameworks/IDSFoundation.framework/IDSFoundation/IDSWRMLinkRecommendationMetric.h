@class NSDictionary, NSString;

@interface IDSWRMLinkRecommendationMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) unsigned int recommendedLinkType;
@property (readonly, nonatomic) unsigned int primaryLinkType;
@property (readonly, nonatomic) unsigned int magnetState;
@property (readonly, nonatomic) unsigned int infraWiFiState;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecommendedLinkType:(unsigned int)a0 primaryLinkType:(unsigned int)a1 magnetState:(unsigned int)a2 infraWiFiState:(unsigned int)a3;

@end

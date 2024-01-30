@class NSMutableDictionary;

@interface HMMTRDeviceTopology : HMFObject

@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;
@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics;
@property (retain, nonatomic) NSMutableDictionary *deviceFeatureMapValues;
@property (retain, nonatomic) NSMutableDictionary *deviceAttributeValues;
@property (retain, nonatomic) NSMutableDictionary *nodeLabels;
@property (retain, nonatomic) NSMutableDictionary *partsList;
@property (retain, nonatomic) NSMutableDictionary *fixedLabels;
@property (retain, nonatomic) NSMutableDictionary *versions;
@property (retain, nonatomic) NSMutableDictionary *otaRequestorEndpoints;

- (id)_dictionaryRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)getAttributesForClusterClassName:(id)a0 endpoint:(id)a1;
- (id)getBridgeAggregateNodeEndpoint;
- (id)getClustersInUseAtEndpoint:(id)a0;
- (id)getEnabledOTARequestorEndpoint;
- (id)getEndpoints;
- (id)getFeatureMapForClusterClassName:(id)a0 endpoint:(id)a1;
- (id)getFixedLabelsAtEndpoint:(id)a0;
- (id)getHAPCategoriesAtEndpoint:(id)a0;
- (id)getHAPServiceTypesAtEndpoint:(id)a0;
- (id)getNodeLabelAtEndpoint:(id)a0;
- (id)getOTARequestorEndpoints;
- (id)getPartsListAtEndpoint:(id)a0;
- (id)getVersionForKey:(id)a0;
- (id)initWithNodeId:(id)a0 server:(id)a1;
- (id)initWithTopologyDictionary:(id)a0;
- (BOOL)isHAPCharacteristicDisabledAtEndpoint:(id)a0 hapServiceType:(id)a1 hapCharacteristic:(id)a2;

@end

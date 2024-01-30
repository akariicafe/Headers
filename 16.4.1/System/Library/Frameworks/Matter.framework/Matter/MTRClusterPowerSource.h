@class MTRDevice;

@interface MTRClusterPowerSource : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveBatChargeFaultsWithParams:(id)a0;
- (id)readAttributeActiveBatFaultsWithParams:(id)a0;
- (id)readAttributeActiveWiredFaultsWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeBatANSIDesignationWithParams:(id)a0;
- (id)readAttributeBatApprovedChemistryWithParams:(id)a0;
- (id)readAttributeBatCapacityWithParams:(id)a0;
- (id)readAttributeBatChargeLevelWithParams:(id)a0;
- (id)readAttributeBatChargeStateWithParams:(id)a0;
- (id)readAttributeBatChargingCurrentWithParams:(id)a0;
- (id)readAttributeBatCommonDesignationWithParams:(id)a0;
- (id)readAttributeBatFunctionalWhileChargingWithParams:(id)a0;
- (id)readAttributeBatIECDesignationWithParams:(id)a0;
- (id)readAttributeBatPercentRemainingWithParams:(id)a0;
- (id)readAttributeBatPresentWithParams:(id)a0;
- (id)readAttributeBatQuantityWithParams:(id)a0;
- (id)readAttributeBatReplaceabilityWithParams:(id)a0;
- (id)readAttributeBatReplacementDescriptionWithParams:(id)a0;
- (id)readAttributeBatReplacementNeededWithParams:(id)a0;
- (id)readAttributeBatTimeRemainingWithParams:(id)a0;
- (id)readAttributeBatTimeToFullChargeWithParams:(id)a0;
- (id)readAttributeBatVoltageWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDescriptionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeOrderWithParams:(id)a0;
- (id)readAttributeStatusWithParams:(id)a0;
- (id)readAttributeWiredAssessedCurrentWithParams:(id)a0;
- (id)readAttributeWiredAssessedInputFrequencyWithParams:(id)a0;
- (id)readAttributeWiredAssessedInputVoltageWithParams:(id)a0;
- (id)readAttributeWiredCurrentTypeWithParams:(id)a0;
- (id)readAttributeWiredMaximumCurrentWithParams:(id)a0;
- (id)readAttributeWiredNominalVoltageWithParams:(id)a0;
- (id)readAttributeWiredPresentWithParams:(id)a0;

@end

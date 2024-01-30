@class NSUUID, NSNumber;

@interface HMIPersonsModelPrediction : HMFObject

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *personUUID;
@property (readonly) NSNumber *confidence;
@property (readonly) NSUUID *linkedEntityUUID;

- (void).cxx_destruct;
- (id)initWithSourceUUID:(id)a0 personUUID:(id)a1 confidence:(id)a2 linkedEntityUUID:(id)a3;

@end

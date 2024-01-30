@class HMSymptom, HMSymptomFixSession, HMAccessory;

@interface HFSymptomFixManagerItem : NSObject

@property (readonly, nonatomic) HMSymptom *symptom;
@property (readonly, nonatomic) HMSymptomFixSession *fixSession;
@property (readonly, nonatomic) HMAccessory *accessory;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSymptom:(id)a0 fixSession:(id)a1 accessory:(id)a2;

@end

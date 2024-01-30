@class HMCharacteristic, HMCharacteristicWriteAction;
@protocol NSCopying;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder

@property (readonly, nonatomic) HMCharacteristicWriteAction *action;
@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (retain, nonatomic) id<NSCopying> targetValue;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (BOOL)updateWithActionBuilder:(id)a0;
- (id)copyForCreatingNewAction;
- (BOOL)requiresDeviceUnlock;
- (id)description;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (id)commitItem;
- (id)performValidation;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)createNewAction;

@end

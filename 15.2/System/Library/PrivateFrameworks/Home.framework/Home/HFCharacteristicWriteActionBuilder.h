@class HMCharacteristic, HMCharacteristicWriteAction;
@protocol NSCopying;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder

@property (readonly, nonatomic) HMCharacteristicWriteAction *action;
@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (retain, nonatomic) id<NSCopying> targetValue;

+ (Class)homeKitRepresentationClass;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)performValidation;
- (BOOL)requiresDeviceUnlock;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)createNewAction;
- (BOOL)updateWithActionBuilder:(id)a0;
- (id)commitItem;
- (id)compareToObject:(id)a0;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)copyForCreatingNewAction;
- (BOOL)hasSameTargetAsAction:(id)a0;

@end

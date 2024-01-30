@class HMCharacteristic;

@interface _HMCameraSettingsControl : _HMCameraControl

@property (retain, nonatomic) HMCharacteristic *nightVision;
@property (retain, nonatomic) HMCharacteristic *currentHorizontalTilt;
@property (retain, nonatomic) HMCharacteristic *targetHorizontalTilt;
@property (retain, nonatomic) HMCharacteristic *currentVerticalTilt;
@property (retain, nonatomic) HMCharacteristic *targetVerticalTilt;
@property (retain, nonatomic) HMCharacteristic *opticalZoom;
@property (retain, nonatomic) HMCharacteristic *digitalZoom;
@property (retain, nonatomic) HMCharacteristic *imageRotation;
@property (retain, nonatomic) HMCharacteristic *imageMirroring;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0 service:(id)a1 profileUniqueIdentifier:(id)a2;

@end

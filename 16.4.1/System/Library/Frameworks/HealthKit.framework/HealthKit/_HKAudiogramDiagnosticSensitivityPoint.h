@interface _HKAudiogramDiagnosticSensitivityPoint : NSObject

@property (readonly, nonatomic) double earSensitivityDBHL;
@property (readonly, nonatomic) double frequencyHz;

- (id)initWithEarSensitivity:(id)a0 frequency:(id)a1;

@end

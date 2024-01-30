@class NSNumber, NSArray;

@interface TVLALSCalibrationData : NSObject

@property (retain, nonatomic) NSNumber *channels;
@property (retain, nonatomic) NSNumber *wavelengthStartVisible;
@property (retain, nonatomic) NSNumber *wavelengthStartNIR;
@property (retain, nonatomic) NSNumber *wavelengthEnd;
@property (retain, nonatomic) NSNumber *wavelengthStep;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *displayID;
@property (retain, nonatomic) NSNumber *normalizationFactor;
@property (retain, nonatomic) NSArray *spectrumNom;

+ (id)instanceFromDictionary:(id)a0;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end

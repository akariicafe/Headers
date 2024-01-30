@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL newRadioCoverage;
@property (readonly, nonatomic) BOOL newRadioSaCoverage;
@property (readonly, nonatomic) BOOL newRadioNsaCoverage;
@property (readonly, nonatomic) BOOL newRadioDataBearer;
@property (readonly, nonatomic) BOOL newRadioSaDataBearer;
@property (readonly, nonatomic) BOOL newRadioNsaDataBearer;
@property (readonly, nonatomic) BOOL newRadioMmWaveDataBearer;
@property (readonly, nonatomic) BOOL newRadioSub6DataBearer;
@property (nonatomic) BOOL attached;
@property (nonatomic) BOOL dataSim;
@property (nonatomic) int indicator;
@property (nonatomic) int indicatorOverride;
@property (nonatomic) BOOL roamAllowed;
@property (nonatomic) int radioTechnology;
@property (nonatomic) int dataMode;
@property (nonatomic) int dataBearerTechnology;
@property (nonatomic) unsigned int dataBearerSoMask;
@property (nonatomic) BOOL dataPlanSignalingReductionOverride;
@property (nonatomic) BOOL cellularDataPossible;
@property (nonatomic) unsigned int activeContexts;
@property (nonatomic) unsigned int totalActiveContexts;
@property (nonatomic) BOOL inHomeCountry;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class PBDataReader, NSString, GEOScreenDimension, PBUnknownFields;

@interface GEOCarInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _engineTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _inputMethods;
    struct GEOScreenResolution { double _height; double _width; struct { unsigned char height : 1; unsigned char width : 1; } _has; } _screenResolution;
    NSString *_carName;
    NSString *_manufacturer;
    NSString *_model;
    GEOScreenDimension *_screenDimension;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _brightness;
    int _colorRange;
    int _deviceConnection;
    int _navAidedDrivingStatus;
    BOOL _destinationSharingEnabled;
    struct { unsigned char has_screenResolution : 1; unsigned char has_brightness : 1; unsigned char has_colorRange : 1; unsigned char has_deviceConnection : 1; unsigned char has_navAidedDrivingStatus : 1; unsigned char has_destinationSharingEnabled : 1; unsigned char read_unknownFields : 1; unsigned char read_engineTypes : 1; unsigned char read_inputMethods : 1; unsigned char read_carName : 1; unsigned char read_manufacturer : 1; unsigned char read_model : 1; unsigned char read_screenDimension : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (nonatomic) BOOL hasScreenResolution;
@property (nonatomic) struct GEOScreenResolution { double x0; double x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } screenResolution;
@property (nonatomic) BOOL hasDeviceConnection;
@property (nonatomic) int deviceConnection;
@property (nonatomic) BOOL hasDestinationSharingEnabled;
@property (nonatomic) BOOL destinationSharingEnabled;
@property (nonatomic) BOOL hasNavAidedDrivingStatus;
@property (nonatomic) int navAidedDrivingStatus;
@property (readonly, nonatomic) unsigned long long engineTypesCount;
@property (readonly, nonatomic) int *engineTypes;
@property (readonly, nonatomic) BOOL hasCarName;
@property (retain, nonatomic) NSString *carName;
@property (readonly, nonatomic) BOOL hasScreenDimension;
@property (retain, nonatomic) GEOScreenDimension *screenDimension;
@property (nonatomic) BOOL hasColorRange;
@property (nonatomic) int colorRange;
@property (nonatomic) BOOL hasBrightness;
@property (nonatomic) int brightness;
@property (readonly, nonatomic) unsigned long long inputMethodsCount;
@property (readonly, nonatomic) int *inputMethods;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)carInfoWithTraits:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)addInputMethod:(int)a0;
- (void)clearInputMethods;
- (int)inputMethodAtIndex:(unsigned long long)a0;
- (id)deviceConnectionAsString:(int)a0;
- (int)StringAsDeviceConnection:(id)a0;
- (id)navAidedDrivingStatusAsString:(int)a0;
- (int)StringAsNavAidedDrivingStatus:(id)a0;
- (void)setInputMethods:(int *)a0 count:(unsigned long long)a1;
- (id)inputMethodsAsString:(int)a0;
- (int)StringAsInputMethods:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)initWithTraits:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addEngineType:(int)a0;
- (void)clearEngineTypes;
- (int)engineTypeAtIndex:(unsigned long long)a0;
- (void)setEngineTypes:(int *)a0 count:(unsigned long long)a1;
- (id)engineTypesAsString:(int)a0;
- (int)StringAsEngineTypes:(id)a0;

@end

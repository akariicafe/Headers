@class NSData;

@interface ENAdvertisement : NSObject

@property (retain, nonatomic) NSData *rpi;
@property (retain, nonatomic) NSData *encryptedAEM;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned short scanInterval;
@property (nonatomic) char typicalRSSI;
@property (nonatomic) char maxRSSI;
@property (nonatomic) BOOL saturated;
@property (nonatomic) unsigned char counter;

+ (id)decryptedMetadataForTemporaryExposureKey:(id)a0 encryptedAEM:(const struct { unsigned char x0[4]; } *)a1 RPI:(const struct { unsigned char x0[16]; } *)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStructRepresentation:(struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; })a0;
- (id)initWithRPI:(id)a0 encryptedAEM:(id)a1 timestamp:(double)a2 scanInterval:(unsigned short)a3 typicalRSSI:(char)a4 maxRSSI:(char)a5 saturated:(BOOL)a6 counter:(unsigned char)a7;
- (struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; })structRepresentation;
- (void)combineWithAdvertisement:(id)a0;
- (id)decryptedMetadataForTemporaryExposureKey:(id)a0;

@end

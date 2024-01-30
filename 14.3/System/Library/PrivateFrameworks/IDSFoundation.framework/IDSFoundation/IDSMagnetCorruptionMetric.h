@class NSDictionary, NSString;

@interface IDSMagnetCorruptionMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) unsigned long long correctFramesSinceLastCorruption;
@property (readonly, nonatomic) unsigned long long correctRawBytesSinceLastCorruption;
@property (readonly, nonatomic) unsigned long long discardedRawBytes;
@property (readonly, nonatomic) unsigned long long recoveryTimeInMs;
@property (readonly, nonatomic) unsigned long long linkType;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCorrectFramesSinceLastCorruption:(unsigned long long)a0 correctRawBytesSinceLastCorruption:(unsigned long long)a1 discardedRawBytes:(unsigned long long)a2 recoveryTimeInMs:(unsigned long long)a3 linkType:(unsigned long long)a4;

@end

@class NSString, HDCodableSample, NSData;

@interface HDCodableECGSample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char averageHeartRateInBPM : 1; unsigned char privateClassification : 1; unsigned char symptomsStatus : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasPrivateClassification;
@property (nonatomic) long long privateClassification;
@property (nonatomic) BOOL hasAverageHeartRateInBPM;
@property (nonatomic) double averageHeartRateInBPM;
@property (readonly, nonatomic) BOOL hasVoltagePayload;
@property (retain, nonatomic) NSData *voltagePayload;
@property (nonatomic) BOOL hasSymptomsStatus;
@property (nonatomic) long long symptomsStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;

@end

@class NSString, HDCodableSample, NSData;

@interface HDCodableMedicationDoseEvent : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char doseQuantity : 1; unsigned char logOrigin : 1; unsigned char scheduledDate : 1; unsigned char scheduledDoseQuantity : 1; unsigned char status : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasLogOrigin;
@property (nonatomic) long long logOrigin;
@property (readonly, nonatomic) BOOL hasScheduleItemIdentifier;
@property (retain, nonatomic) NSString *scheduleItemIdentifier;
@property (readonly, nonatomic) BOOL hasMedicationIdentifier;
@property (retain, nonatomic) NSString *medicationIdentifier;
@property (nonatomic) BOOL hasScheduledDoseQuantity;
@property (nonatomic) double scheduledDoseQuantity;
@property (nonatomic) BOOL hasDoseQuantity;
@property (nonatomic) double doseQuantity;
@property (nonatomic) BOOL hasScheduledDate;
@property (nonatomic) double scheduledDate;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long status;
@property (readonly, nonatomic) BOOL hasMedicationUuid;
@property (retain, nonatomic) NSData *medicationUuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end

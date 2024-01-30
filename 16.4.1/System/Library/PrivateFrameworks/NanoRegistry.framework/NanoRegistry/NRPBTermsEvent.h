@class NSData, NSString;

@interface NRPBTermsEvent : PBCodable <NSCopying> {
    struct { unsigned char eventDate : 1; unsigned char eventType : 1; unsigned char presentationLocation : 1; } _has;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasTermsText;
@property (retain, nonatomic) NSData *termsText;
@property (readonly, nonatomic) BOOL hasDocumentationID;
@property (retain, nonatomic) NSString *documentationID;
@property (readonly, nonatomic) BOOL hasPresentationReason;
@property (retain, nonatomic) NSString *presentationReason;
@property (nonatomic) BOOL hasPresentationLocation;
@property (nonatomic) int presentationLocation;
@property (readonly, nonatomic) BOOL hasAcknowledgedDeviceName;
@property (retain, nonatomic) NSString *acknowledgedDeviceName;
@property (readonly, nonatomic) BOOL hasAcknowledgedDeviceSerialNumber;
@property (retain, nonatomic) NSString *acknowledgedDeviceSerialNumber;
@property (readonly, nonatomic) BOOL hasDisplayDeviceName;
@property (retain, nonatomic) NSString *displayDeviceName;
@property (readonly, nonatomic) BOOL hasDisplayDeviceSerialNumber;
@property (retain, nonatomic) NSString *displayDeviceSerialNumber;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic) double eventDate;
@property (readonly, nonatomic) BOOL hasLoggingProcessName;
@property (retain, nonatomic) NSString *loggingProcessName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

@class NSString, _INPBURLValue;

@interface _INPBAnnouncement : PBCodable <_INPBAnnouncement, NSSecureCoding, NSCopying> {
    struct { unsigned char endTime : 1; unsigned char startTime : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long endTime;
@property (nonatomic) BOOL hasEndTime;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (copy, nonatomic) NSString *speechDataTranscription;
@property (readonly, nonatomic) BOOL hasSpeechDataTranscription;
@property (retain, nonatomic) _INPBURLValue *speechDataURL;
@property (readonly, nonatomic) BOOL hasSpeechDataURL;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL hasStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, _INPBURLValue, _INPBFileDataAttachment;

@interface _INPBSendMessageAttachment : PBCodable <_INPBSendMessageAttachment, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBFileDataAttachment *audioMessageFile;
@property (readonly, nonatomic) BOOL hasAudioMessageFile;
@property (retain, nonatomic) _INPBURLValue *audioMessageFileURL;
@property (readonly, nonatomic) BOOL hasAudioMessageFileURL;
@property (nonatomic) BOOL currentLocation;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (retain, nonatomic) _INPBFileDataAttachment *file;
@property (readonly, nonatomic) BOOL hasFile;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (readonly, nonatomic) BOOL hasFileURL;
@property (retain, nonatomic) _INPBURLValue *speechDataURL;
@property (readonly, nonatomic) BOOL hasSpeechDataURL;
@property (readonly, nonatomic) unsigned long long whichDatasource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end

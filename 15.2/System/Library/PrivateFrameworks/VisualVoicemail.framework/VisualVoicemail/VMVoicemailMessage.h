@class NSString, VMAudioMessage, VMTranscriptMessage;

@interface VMVoicemailMessage : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char duration : 1; unsigned char flags : 1; unsigned char identifier : 1; unsigned char protocolVersion : 1; unsigned char remoteUID : 1; } _has;
}

@property (nonatomic) BOOL hasRemoteUID;
@property (nonatomic) unsigned int remoteUID;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasSenderDestinationID;
@property (retain, nonatomic) NSString *senderDestinationID;
@property (readonly, nonatomic) BOOL hasCallbackDestinationID;
@property (retain, nonatomic) NSString *callbackDestinationID;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasDataURL;
@property (retain, nonatomic) NSString *dataURL;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) BOOL hasTranscriptionURL;
@property (retain, nonatomic) NSString *transcriptionURL;
@property (readonly, nonatomic) BOOL hasTranscript;
@property (retain, nonatomic) VMTranscriptMessage *transcript;
@property (readonly, nonatomic) BOOL hasAudio;
@property (retain, nonatomic) VMAudioMessage *audio;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly, nonatomic) BOOL hasReceiverDestinationID;
@property (retain, nonatomic) NSString *receiverDestinationID;
@property (readonly, nonatomic) BOOL hasReceiverLabelID;
@property (retain, nonatomic) NSString *receiverLabelID;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end

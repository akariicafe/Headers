@class NSString, NanoPhoneVoicemailTranscript, NanoPhoneVoicemailBody;

@interface NanoPhoneVoicemailMeta : PBCodable <SYObject, NSCopying> {
    struct { unsigned char date : 1; unsigned char identifier : 1; unsigned char remoteUID : 1; unsigned char duration : 1; unsigned char flags : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long voicemailNumber;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) long long identifier;
@property (nonatomic) BOOL hasRemoteUID;
@property (nonatomic) long long remoteUID;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasSender;
@property (retain, nonatomic) NSString *sender;
@property (readonly, nonatomic) BOOL hasCallbackNumber;
@property (retain, nonatomic) NSString *callbackNumber;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) int duration;
@property (readonly, nonatomic) BOOL hasDataPath;
@property (retain, nonatomic) NSString *dataPath;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) int flags;
@property (readonly, nonatomic) BOOL hasVoicemailBody;
@property (retain, nonatomic) NanoPhoneVoicemailBody *voicemailBody;
@property (readonly, nonatomic) BOOL hasVoicemailTranscript;
@property (retain, nonatomic) NanoPhoneVoicemailTranscript *voicemailTranscript;
@property (readonly, nonatomic) BOOL hasReceiverDestinationID;
@property (retain, nonatomic) NSString *receiverDestinationID;
@property (readonly, nonatomic) BOOL hasNphReceiverISOCountryCode;
@property (retain, nonatomic) NSString *nphReceiverISOCountryCode;

+ (id)voicemailWithMessage:(id)a0;
+ (id)voicemailWithSYContext:(id)a0;
+ (id)xpcObjectAsArray:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)syncOperation;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (id)syncId;
- (id)contactUsingContactStore:(id)a0 withKeysToFetch:(id)a1;
- (id)initWithVoicemailMessage:(id)a0;
- (id)asXpcObject;
- (void)attachToXpcObject:(id)a0;
- (id)contextWithSyncOperation:(int)a0;
- (void)displayLabelFromContactStore:(id)a0 withUpdateBlock:(id /* block */)a1;
- (id)displayNameFromContactStore:(id)a0;
- (id)initWithVoicemail:(id)a0;
- (void)loadVoicemailBodyIfNeeded;
- (id)voicemailDescription;
- (void)writeVoicemailBody;

@end

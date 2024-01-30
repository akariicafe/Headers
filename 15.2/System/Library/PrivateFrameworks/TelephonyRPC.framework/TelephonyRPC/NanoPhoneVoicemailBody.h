@class NSData;

@interface NanoPhoneVoicemailBody : PBCodable <NSCopying>

@property (nonatomic) long long voicemailNumber;
@property (readonly, nonatomic) BOOL hasVoicemailRecording;
@property (retain, nonatomic) NSData *voicemailRecording;

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
- (id)initWithAudioMessage:(id)a0 voicemailNumber:(unsigned long long)a1;

@end

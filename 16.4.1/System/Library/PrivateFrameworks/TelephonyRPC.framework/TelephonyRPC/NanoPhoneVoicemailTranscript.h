@class NSString;

@interface NanoPhoneVoicemailTranscript : PBCodable <NSCopying>

@property (nonatomic) long long voicemailNumber;
@property (readonly, nonatomic) BOOL hasTranscriptionString;
@property (retain, nonatomic) NSString *transcriptionString;

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
- (id)initWithTranscriptMessage:(id)a0 voicemailNumber:(unsigned long long)a1;

@end

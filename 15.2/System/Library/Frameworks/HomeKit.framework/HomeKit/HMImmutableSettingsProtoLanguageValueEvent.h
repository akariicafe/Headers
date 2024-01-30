@class NSString;

@interface HMImmutableSettingsProtoLanguageValueEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasInputLanguageCode;
@property (retain, nonatomic) NSString *inputLanguageCode;
@property (readonly, nonatomic) BOOL hasOutputVoiceLanguageCode;
@property (retain, nonatomic) NSString *outputVoiceLanguageCode;
@property (readonly, nonatomic) BOOL hasOutputVoiceGenderCode;
@property (retain, nonatomic) NSString *outputVoiceGenderCode;
@property (readonly, nonatomic) BOOL hasVoiceName;
@property (retain, nonatomic) NSString *voiceName;

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

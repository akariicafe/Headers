@class NSData;

@interface SISchemaSiriUISettings : PBCodable {
    struct { unsigned char alwaysShowUserSpeechTranscript : 1; unsigned char alwaysBlurBackground : 1; unsigned char alwaysShowSiriDialog : 1; } _has;
}

@property (nonatomic) BOOL alwaysShowUserSpeechTranscript;
@property (nonatomic) BOOL hasAlwaysShowUserSpeechTranscript;
@property (nonatomic) BOOL alwaysBlurBackground;
@property (nonatomic) BOOL hasAlwaysBlurBackground;
@property (nonatomic) BOOL alwaysShowSiriDialog;
@property (nonatomic) BOOL hasAlwaysShowSiriDialog;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end

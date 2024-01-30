@class NSArray, FLOWSchemaFLOWSmsAudioContext, NSData, FLOWSchemaFLOWSmsTextContext, FLOWSchemaFLOWTextMessageLength;

@interface FLOWSchemaFLOWSmsContext : SISchemaInstrumentationMessage {
    struct { unsigned char messageType : 1; unsigned char emojiUsed : 1; unsigned char keyboardUsed : 1; } _has;
}

@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL emojiUsed;
@property (nonatomic) BOOL hasEmojiUsed;
@property (nonatomic) BOOL keyboardUsed;
@property (nonatomic) BOOL hasKeyboardUsed;
@property (copy, nonatomic) NSArray *recipientTypes;
@property (nonatomic) unsigned int messageDurationMs;
@property (nonatomic) BOOL hasMessageDurationMs;
@property (retain, nonatomic) FLOWSchemaFLOWTextMessageLength *textMessageLength;
@property (nonatomic) BOOL hasTextMessageLength;
@property (retain, nonatomic) FLOWSchemaFLOWSmsTextContext *textContext;
@property (nonatomic) BOOL hasTextContext;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAudioContext *audioContext;
@property (nonatomic) BOOL hasAudioContext;
@property (copy, nonatomic) NSArray *personTypes;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichMessagesize;
@property (readonly, nonatomic) unsigned long long whichMessagecontext;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRecipientType:(int)a0;
- (void)addPersonType:(int)a0;
- (void)clearRecipientType;
- (unsigned long long)recipientTypeCount;
- (int)recipientTypeAtIndex:(unsigned long long)a0;
- (void)clearPersonType;
- (unsigned long long)personTypeCount;
- (int)personTypeAtIndex:(unsigned long long)a0;

@end

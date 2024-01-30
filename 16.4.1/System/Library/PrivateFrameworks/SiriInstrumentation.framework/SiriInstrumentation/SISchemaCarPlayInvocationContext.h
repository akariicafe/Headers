@class NSString, NSData;

@interface SISchemaCarPlayInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char directAction : 1; unsigned char enhancedVoiceTriggerMode : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) int directAction;
@property (nonatomic) BOOL hasDirectAction;
@property (nonatomic) int enhancedVoiceTriggerMode;
@property (nonatomic) BOOL hasEnhancedVoiceTriggerMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteBundleID;
- (void)deleteDirectAction;
- (void)deleteEnhancedVoiceTriggerMode;

@end

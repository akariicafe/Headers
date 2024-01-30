@class CPMessagingConversationActivityMetadata, NSString, NSData, CPMessagingConversationActivityContext, CPMessagingMMCSMetadata, CPMessagingHandle;

@interface CPMessagingConversationActivity : PBCodable <NSCopying> {
    struct { unsigned char updatedDateEpochTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifierUUIDString;
@property (retain, nonatomic) NSString *identifierUUIDString;
@property (readonly, nonatomic) BOOL hasApplicationContext;
@property (retain, nonatomic) NSData *applicationContext;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasActivityIdentifier;
@property (retain, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;
@property (readonly, nonatomic) BOOL hasMmcsMetadata;
@property (retain, nonatomic) CPMessagingMMCSMetadata *mmcsMetadata;
@property (readonly, nonatomic) BOOL hasActivityContext;
@property (retain, nonatomic) CPMessagingConversationActivityContext *activityContext;
@property (readonly, nonatomic) BOOL hasOriginatorHandle;
@property (retain, nonatomic) CPMessagingHandle *originatorHandle;
@property (nonatomic) BOOL hasUpdatedDateEpochTime;
@property (nonatomic) double updatedDateEpochTime;
@property (readonly, nonatomic) BOOL hasFallbackApplicationName;
@property (retain, nonatomic) NSString *fallbackApplicationName;
@property (readonly, nonatomic) BOOL hasActivityMetadata;
@property (retain, nonatomic) CPMessagingConversationActivityMetadata *activityMetadata;

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

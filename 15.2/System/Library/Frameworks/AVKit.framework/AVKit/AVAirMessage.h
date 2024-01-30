@class NSString, NSArray, NSValue, NSData, NSDictionary;

@interface AVAirMessage : NSObject

@property (class, readonly, nonatomic) BOOL isAirMessagingEnabled;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (retain, nonatomic) NSValue *value;
@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) NSArray *array;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDictionary *initialRepresentation;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSData *jsonDataRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)buildVersion;
+ (id)_nameForDataCompressionAlgorithm:(long long)a0;
+ (id)commonDictionaryRepresentationKeys;
+ (id)dictionaryRepresentationCommon;
+ (id)currentOSIdentifier;
+ (id)currentAppIdentifier;
+ (id)_decompressBodyData:(id)a0 forCompressionAlgorithm:(id)a1;
+ (id)messageWithRequiresLinearPlayback:(BOOL)a0 itemIdentifier:(id)a1;
+ (id)messageWithUserScrubToAssetTime:(double)a0 itemIdentifier:(id)a1;
+ (id)messageWithExternalMetadata:(id)a0 itemIdentifier:(id)a1;
+ (id)messageWithPosterArtworkMetadata:(id)a0 itemIdentifier:(id)a1;
+ (id)messageWithParts:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)number;
- (id)initWithMessageType:(unsigned int)a0 itemIdentifier:(id)a1;
- (id)initWithMessageType:(unsigned int)a0 itemIdentifier:(id)a1 dictionaryRepresentation:(id)a2;
- (id)allRecognizedKeysForDictionaryRepresentation;
- (id)headerTextRepresenationForBodyDataLength:(unsigned long long)a0 extraHeaders:(id)a1;
- (BOOL)shouldUseJSONForBody;
- (id)messageDataRepresentation;

@end

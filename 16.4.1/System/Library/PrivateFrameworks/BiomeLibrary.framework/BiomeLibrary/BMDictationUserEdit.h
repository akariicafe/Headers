@class NSString, NSArray, BMDictationUserEditRequestMetadata;

@interface BMDictationUserEdit : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *asrID;
@property (readonly, nonatomic) NSString *interactionID;
@property (readonly, nonatomic) BMDictationUserEditRequestMetadata *metadata;
@property (readonly, nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (readonly, nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (readonly, nonatomic) NSString *correctedText;
@property (readonly, nonatomic) NSString *recognizedText;
@property (readonly, nonatomic) NSArray *recognizedTokens;
@property (readonly, nonatomic) NSArray *alternativeSelections;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithAsrID:(id)a0 interactionID:(id)a1 metadata:(id)a2 startIndex:(id)a3 endIndex:(id)a4 correctedText:(id)a5 recognizedText:(id)a6 recognizedTokens:(id)a7 alternativeSelections:(id)a8;

@end

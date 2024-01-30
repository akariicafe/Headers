@class NSString;

@interface BMPeopleSuggesterSiriNIRankedSuggestion : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *contactId;
@property (readonly, nonatomic) NSString *contactGivenName;
@property (readonly, nonatomic) NSString *contactFamilyName;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) int rank;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *modelVersion;
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
- (id)initWithContactId:(id)a0 contactGivenName:(id)a1 contactFamilyName:(id)a2 score:(id)a3 rank:(id)a4 modelName:(id)a5 modelVersion:(id)a6;

@end

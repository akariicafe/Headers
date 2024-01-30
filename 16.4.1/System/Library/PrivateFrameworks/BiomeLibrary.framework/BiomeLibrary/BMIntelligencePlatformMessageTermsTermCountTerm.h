@class NSString;

@interface BMIntelligencePlatformMessageTermsTermCountTerm : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int termType;
@property (readonly, nonatomic) NSString *termString;
@property (readonly, nonatomic) long long termID;
@property (nonatomic) BOOL hasTermID;
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
- (id)initWithTermType:(int)a0 termString:(id)a1 termID:(id)a2;

@end

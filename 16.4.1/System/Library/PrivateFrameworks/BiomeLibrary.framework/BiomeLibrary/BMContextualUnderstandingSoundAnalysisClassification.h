@class NSString;

@interface BMContextualUnderstandingSoundAnalysisClassification : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *soundName;
@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) unsigned int startOffsetInSecs;
@property (nonatomic) BOOL hasStartOffsetInSecs;
@property (readonly, nonatomic) unsigned int durationInSecs;
@property (nonatomic) BOOL hasDurationInSecs;
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
- (id)initWithSoundName:(id)a0 confidence:(id)a1 startOffsetInSecs:(id)a2 durationInSecs:(id)a3;

@end

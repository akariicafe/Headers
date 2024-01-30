@class NSString, NSArray, NSData, BMSiriAnnotatedEntityGroupIdentifier;

@interface BMSiriAnnotatedEntity : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSData *usoEntity;
@property (readonly, nonatomic) NSString *dataType;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BMSiriAnnotatedEntityGroupIdentifier *group;
@property (readonly, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) double saliencyScore;
@property (nonatomic) BOOL hasSaliencyScore;
@property (readonly, nonatomic) unsigned long long saliencyComputedAt;
@property (nonatomic) BOOL hasSaliencyComputedAt;
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
- (id)initWithID:(id)a0 appBundleID:(id)a1 usoEntity:(id)a2 dataType:(id)a3 data:(id)a4 group:(id)a5 annotations:(id)a6 saliencyScore:(id)a7 saliencyComputedAt:(id)a8;

@end

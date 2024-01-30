@class NSString;

@interface BMSiriAnnotatedEntityAnnotation : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int name;
@property (readonly, nonatomic) unsigned long long value;
@property (nonatomic) BOOL hasValue;
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
- (id)initWithName:(int)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;

@end

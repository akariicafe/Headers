@class NSArray, NSString;

@interface BMKeyboardTokenFrequency : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSArray *tokenFrequencies;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) int tokenType;
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
- (id)initWithTokenFrequencies:(id)a0 locale:(id)a1 tokenType:(int)a2;

@end

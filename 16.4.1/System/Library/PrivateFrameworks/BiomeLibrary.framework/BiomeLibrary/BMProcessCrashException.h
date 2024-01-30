@class NSString;

@interface BMProcessCrashException : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *codes;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *signal;
@property (readonly, nonatomic) NSString *subtype;
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
- (id)initWithCodes:(id)a0 type:(id)a1 signal:(id)a2 subtype:(id)a3;

@end

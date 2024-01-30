@class NSString;

@interface BMMapsFeedback : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSString *locationStartID;
@property (readonly, nonatomic) NSString *locationEndID;
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
- (id)initWithHandle:(id)a0 contactID:(id)a1 locationStartID:(id)a2 locationEndID:(id)a3;

@end

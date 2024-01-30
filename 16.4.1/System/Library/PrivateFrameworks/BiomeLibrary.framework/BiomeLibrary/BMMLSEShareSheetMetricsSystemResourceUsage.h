@class NSString;

@interface BMMLSEShareSheetMetricsSystemResourceUsage : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) int userType;
@property (readonly, nonatomic) BOOL timeoutOccured;
@property (nonatomic) BOOL hasTimeoutOccured;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *subidentifier;
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
- (id)initWithDuration:(id)a0 userType:(int)a1 timeoutOccured:(id)a2 identifier:(id)a3 subidentifier:(id)a4;

@end

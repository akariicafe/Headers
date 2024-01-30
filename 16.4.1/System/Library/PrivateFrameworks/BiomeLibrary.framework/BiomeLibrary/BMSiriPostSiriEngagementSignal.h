@class NSString, NSArray, BMSiriPostSiriEngagementSignalDeltaEvent;

@interface BMSiriPostSiriEngagementSignal : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) BOOL isPostSiriEngagement;
@property (nonatomic) BOOL hasIsPostSiriEngagement;
@property (readonly, nonatomic) BMSiriPostSiriEngagementSignalDeltaEvent *pseDelta;
@property (readonly, nonatomic) NSArray *pseContents;
@property (readonly, nonatomic) double donatedTimestamp;
@property (nonatomic) BOOL hasDonatedTimestamp;
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
- (id)initWithDomain:(id)a0 action:(id)a1 isPostSiriEngagement:(id)a2 pseDelta:(id)a3 pseContents:(id)a4 donatedTimestamp:(id)a5;

@end

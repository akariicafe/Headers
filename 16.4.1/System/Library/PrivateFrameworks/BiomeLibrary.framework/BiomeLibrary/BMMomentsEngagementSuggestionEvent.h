@class NSArray, NSString, NSDate;

@interface BMMomentsEngagementSuggestionEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *fullBundleOrderedSet;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *viewContainerName;
@property (readonly, nonatomic) double viewVisibleTime;
@property (nonatomic) BOOL hasViewVisibleTime;
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
- (id)initWithType:(int)a0 timestamp:(id)a1 fullBundleOrderedSet:(id)a2 clientIdentifier:(id)a3 viewContainerName:(id)a4 viewVisibleTime:(id)a5;

@end

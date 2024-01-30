@class NSString, NSDate;

@interface BMScreenTimeChildState : BMEventBase <BMStoreData> {
    BOOL _hasRaw_signalDate;
    double _raw_signalDate;
}

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) NSString *eventID;
@property (readonly, nonatomic) NSDate *signalDate;
@property (readonly, nonatomic) NSString *userDSID;
@property (readonly, nonatomic) int state;
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
- (id)initWithStarting:(id)a0 eventID:(id)a1 signalDate:(id)a2 userDSID:(id)a3 state:(int)a4;

@end

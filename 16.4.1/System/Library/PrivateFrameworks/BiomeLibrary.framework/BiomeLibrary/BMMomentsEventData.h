@class BMMomentsEventDataEventBundle, NSString, BMMomentsEventDataEvent;

@interface BMMomentsEventData : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMMomentsEventDataEvent *event;
@property (readonly, nonatomic) BMMomentsEventDataEventBundle *bundle;
@property (readonly, nonatomic) BOOL isBundle;
@property (nonatomic) BOOL hasIsBundle;
@property (readonly, nonatomic) BOOL IHAState;
@property (nonatomic) BOOL hasIHAState;
@property (readonly, nonatomic) int age;
@property (nonatomic) BOOL hasAge;
@property (readonly, nonatomic) int ageRange;
@property (readonly, nonatomic) int biologicalSex;
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
- (id)initWithEvent:(id)a0 bundle:(id)a1 isBundle:(id)a2 IHAState:(id)a3 age:(id)a4 ageRange:(int)a5 biologicalSex:(int)a6;

@end

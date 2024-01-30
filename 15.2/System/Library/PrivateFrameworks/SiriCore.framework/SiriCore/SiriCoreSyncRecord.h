@class NSString, NSData;

@interface SiriCoreSyncRecord : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int itemPriority;
@property (retain, nonatomic) NSString *debugValue;
@property (retain, nonatomic) NSData *dataValue;
@property (retain, nonatomic) NSData *addedValue;
@property (retain, nonatomic) NSData *metaValue;
@property (nonatomic) double updateTime;
@property (retain, nonatomic) NSData *checkHash;

+ (id)syncRecordWithKey:(id)a0 identifier:(id)a1 priority:(int)a2 debugValue:(id)a3 dataValue:(id)a4 addedValue:(id)a5 appMeta:(id)a6;
+ (id)syncRecordWithKey:(id)a0 identifier:(id)a1;

- (void)updateHash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 identifier:(id)a1 priority:(int)a2 debugValue:(id)a3 dataValue:(id)a4 addedValue:(id)a5 appMeta:(id)a6;
- (void)setUpdateTimeToNow;

@end

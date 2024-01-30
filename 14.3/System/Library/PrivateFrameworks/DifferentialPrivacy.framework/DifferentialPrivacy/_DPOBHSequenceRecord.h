@class NSString;

@interface _DPOBHSequenceRecord : _DPOBHRecord

@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) BOOL sequenceBitValue;
@property (retain, nonatomic) NSString *plainSequence;

+ (id)entityName;
+ (id)recordWithKey:(id)a0 sequence:(id)a1 bitPosition:(long long)a2 bitValue:(BOOL)a3 creationDate:(double)a4 submitted:(BOOL)a5 objectId:(id)a6;

- (void).cxx_destruct;
- (BOOL)copyToManagedObject:(id)a0;
- (id)jsonString;
- (id)description;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 sequence:(id)a1 bitPosition:(long long)a2 bitValue:(BOOL)a3 creationDate:(double)a4 submitted:(BOOL)a5 objectId:(id)a6;

@end

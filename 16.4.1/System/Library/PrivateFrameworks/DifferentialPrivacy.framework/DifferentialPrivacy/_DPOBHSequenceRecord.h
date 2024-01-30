@class NSString;

@interface _DPOBHSequenceRecord : _DPOBHRecord

@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) BOOL sequenceBitValue;
@property (retain, nonatomic) NSString *plainSequence;

+ (id)entityName;
+ (id)recordWithKey:(id)a0 sequence:(id)a1 bitPosition:(long long)a2 bitValue:(BOOL)a3 creationDate:(double)a4 submitted:(BOOL)a5 objectId:(id)a6;

- (BOOL)copyFromManagedObject:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonString;
- (id)initWithKey:(id)a0 sequence:(id)a1 bitPosition:(long long)a2 bitValue:(BOOL)a3 creationDate:(double)a4 submitted:(BOOL)a5 objectId:(id)a6;

@end

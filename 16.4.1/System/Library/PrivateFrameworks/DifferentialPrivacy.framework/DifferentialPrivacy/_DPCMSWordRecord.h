@class NSData, NSString;

@interface _DPCMSWordRecord : _DPCMSSequenceRecord

@property (retain, nonatomic) NSData *fragment;
@property (nonatomic) short fragmentPosition;
@property (nonatomic) short fragmentHashIndex;
@property (copy, nonatomic) NSString *plainFragment;

+ (id)entityName;

- (BOOL)copyFromManagedObject:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonString;
- (id)initWithKey:(id)a0 plainSequence:(id)a1 sequence:(id)a2 sequenceHashIndex:(unsigned short)a3 plainFragment:(id)a4 fragment:(id)a5 fragmentHashIndex:(unsigned short)a6 fragmentPosition:(unsigned short)a7 creationDate:(double)a8 submitted:(BOOL)a9 objectId:(id)a10;

@end

@class NSDictionary, NSMutableArray;

@interface FRRingBuffer : NSObject

@property (nonatomic) unsigned long long capacity;
@property (retain, nonatomic) NSMutableArray *values;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0 dictionary:(id)a1;
- (void)insertValue:(double)a0;

@end

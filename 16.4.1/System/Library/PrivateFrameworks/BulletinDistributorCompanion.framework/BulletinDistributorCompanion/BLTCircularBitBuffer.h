@class NSMutableData;

@interface BLTCircularBitBuffer : NSObject {
    NSMutableData *_bitVector;
}

@property (readonly, nonatomic) unsigned long long beginIndex;
@property (readonly, nonatomic) unsigned long long capacity;

+ (unsigned long long)actualCapacity:(unsigned long long)a0;

- (id)initWithCapacity:(unsigned long long)a0;
- (void)clear;
- (void).cxx_destruct;
- (void)setBit:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)_setBit:(BOOL)a0 atIndex:(unsigned long long)a1;
- (unsigned char)bitAtIndex:(unsigned long long)a0;
- (id)bitVector;
- (id)initWithData:(id)a0 andIndex:(unsigned long long)a1;

@end

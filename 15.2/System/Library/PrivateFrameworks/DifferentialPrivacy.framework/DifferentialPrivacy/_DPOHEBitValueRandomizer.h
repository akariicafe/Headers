@class NSString;

@interface _DPOHEBitValueRandomizer : NSObject <_DPStringRandomizer> {
    double _epsilon;
    unsigned long long _domainSize;
    double _flipProbability;
    struct mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> { unsigned int __x_[624]; unsigned long long __i_; } _rng;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)oheBitValueRandomizerWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;

- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)init;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id).cxx_construct;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)randomize:(id)a0;
- (id)initWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;
- (unsigned long long)drawNumberOfFlippedBits;
- (id)randomizeWithMessageIndex:(unsigned long long)a0 numberOfFlippedBits:(unsigned long long)a1;

@end

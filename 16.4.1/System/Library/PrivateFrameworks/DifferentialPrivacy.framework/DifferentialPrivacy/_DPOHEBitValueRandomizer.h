@class NSString;

@interface _DPOHEBitValueRandomizer : NSObject <_DPStringRandomizer> {
    double _epsilon;
    unsigned long long _domainSize;
    double _flipProbability;
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> { unsigned int __x_[624]; unsigned long long __i_; } _rng;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)oheBitValueRandomizerWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;

- (id).cxx_construct;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)initWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;
- (unsigned long long)drawNumberOfFlippedBits;
- (id)randomize:(id)a0;
- (id)randomizeWithMessageIndex:(unsigned long long)a0 numberOfFlippedBits:(unsigned long long)a1;

@end

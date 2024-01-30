@interface FPNSURLBitVectorForBounce : NSObject {
    struct __CFBitVector { } *_vector;
}

@property (readonly, nonatomic) int bitCount;

- (id)init;
- (id)findNextAvailableBounceNumber;
- (id)findNextAvailableBounceNumberFromIndex:(int)a0;
- (BOOL)foundAllAvailableBounceNumbers;
- (void)markBounceNumberAsFound:(id)a0;

@end

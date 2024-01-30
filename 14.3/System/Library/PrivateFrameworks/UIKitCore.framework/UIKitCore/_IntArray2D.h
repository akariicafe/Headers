@interface _IntArray2D : NSObject {
    long long *_arrayData;
}

@property (readonly, nonatomic) unsigned long long iSize;
@property (readonly, nonatomic) unsigned long long jSize;
@property (nonatomic) BOOL shouldBoundsCheck;

+ (id)arrayWithISize:(unsigned long long)a0 jSize:(unsigned long long)a1;

- (long long):(unsigned long long)a0 :(unsigned long long)a1;
- (void)dealloc;
- (void):(unsigned long long)a0 :(unsigned long long)a1 newValue:(long long)a2;
- (id)description;
- (long long):(unsigned long long)a0 :(unsigned long long)a1 outOfBoundsReturnValue:(long long)a2;
- (BOOL)inBoundsForIIndex:(unsigned long long)a0 jIndex:(unsigned long long)a1;
- (id)initWithISize:(unsigned long long)a0 jSize:(unsigned long long)a1;
- (void)assertBoundsForIIndex:(unsigned long long)a0 jIndex:(unsigned long long)a1;

@end

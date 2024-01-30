@interface TIErrorGenerator : NSObject {
    void *m_generator;
    void *m_distribution;
    float _relErrorNumbersPunctuation;
    float _relErrorControlKeys;
    unsigned int _RNGSeedSalt;
}

@property (nonatomic) long long spaceHorizontalErrorMode;
@property (nonatomic) double spaceVerticalBias;

+ (id)errorGeneratorWithAttributes:(id)a0;

- (id)initWithAttributes:(id)a0;
- (void)dealloc;
- (id)init;
- (void)reset;
- (id)errorForKeyString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })globalBias;
- (struct CGPoint { double x0; double x1; })persistentBiasForKeyString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })persistentBiasForSpaceBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })randomErrorForKeyString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })randomPointInDistribution;
- (void)setRandomNumberSeed:(unsigned int)a0;
- (double)uniformRandomNumber;
- (struct CGPoint { double x0; double x1; })uniformRandomPointInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

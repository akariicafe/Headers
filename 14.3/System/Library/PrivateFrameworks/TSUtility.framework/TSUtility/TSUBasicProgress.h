@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage *mStorage;
}

@property double value;
@property (getter=isIndeterminate) BOOL indeterminate;

- (id)init;
- (void)dealloc;
- (double)maxValue;
- (id)initWithMaxValue:(double)a0;

@end

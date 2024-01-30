@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage *mStorage;
}

@property double value;
@property (getter=isIndeterminate) BOOL indeterminate;

- (void)dealloc;
- (id)init;
- (double)maxValue;
- (id)initWithMaxValue:(double)a0;

@end

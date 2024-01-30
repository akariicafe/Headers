@class OITSUBasicProgressStorage;

@interface OITSUBasicProgress : OITSUProgress {
    OITSUBasicProgressStorage *mStorage;
}

@property double value;
@property (getter=isIndeterminate) BOOL indeterminate;

- (double)maxValue;
- (id)init;
- (void)dealloc;
- (id)initWithMaxValue:(double)a0;

@end

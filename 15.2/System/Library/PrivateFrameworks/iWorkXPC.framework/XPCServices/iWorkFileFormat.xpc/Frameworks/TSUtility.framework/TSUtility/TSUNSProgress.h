@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (double)maxValue;
- (id)message;
- (void)setMessage:(id)a0;
- (double)value;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isIndeterminate;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end

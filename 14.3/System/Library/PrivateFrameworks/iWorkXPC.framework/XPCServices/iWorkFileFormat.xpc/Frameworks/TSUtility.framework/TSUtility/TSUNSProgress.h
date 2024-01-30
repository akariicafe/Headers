@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void)setMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isIndeterminate;
- (double)value;
- (double)maxValue;
- (id)message;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end

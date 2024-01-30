@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (BOOL)isIndeterminate;
- (void)setMessage:(id)a0;
- (double)value;
- (id)init;
- (id)message;
- (void).cxx_destruct;
- (double)maxValue;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end

@class NSArray;

@interface AEDUnionObservation : NSObject <AEDObservation> {
    NSArray *_observations;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end

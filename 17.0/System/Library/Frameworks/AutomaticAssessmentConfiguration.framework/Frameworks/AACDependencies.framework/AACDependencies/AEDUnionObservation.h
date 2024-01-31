@class NSArray;

@interface AEDUnionObservation : NSObject <AEDObservation> {
    NSArray *_observations;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end

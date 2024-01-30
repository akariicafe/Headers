@class NSArray;

@interface AERUnionObservation : NSObject <AERObservation> {
    NSArray *_observations;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end

@class NSString;

@interface MNCommuteDestinationNavigabilityScore : MNCommuteDestinationScore <MNCommuteDestinationObserver> {
    BOOL _destinationInvalid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)weight;

- (id)initWithDestination:(id)a0;
- (void)updateScoreIfPossible;
- (BOOL)destinationInvalid;
- (id)descriptionExtras;
- (void)_checkDestinationRoute:(id)a0;
- (void)commuteDestination:(id)a0 didChangeRoute:(id)a1;

@end

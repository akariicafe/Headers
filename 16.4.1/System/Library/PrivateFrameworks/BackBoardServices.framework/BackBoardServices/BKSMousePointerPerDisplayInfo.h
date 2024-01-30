@class NSSet, BSCompoundAssertion;

@interface BKSMousePointerPerDisplayInfo : NSObject

@property (retain, nonatomic) BSCompoundAssertion *pointerSuppressionAssertion;
@property (retain, nonatomic) BSCompoundAssertion *globalEventsAssertion;
@property (retain, nonatomic) NSSet *previouslyRoutedContextIDs;

- (void).cxx_destruct;

@end

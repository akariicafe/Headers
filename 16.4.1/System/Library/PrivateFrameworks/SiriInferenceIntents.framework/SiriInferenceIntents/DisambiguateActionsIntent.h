@class NSString;

@interface DisambiguateActionsIntent : INIntent

@property (nonatomic, copy) NSString *candidateBundles;
@property (nonatomic, copy) NSString *candidateActions;
@property (nonatomic, copy) NSString *selectedCandidateIndex;

- (id)initWithCoder:(id)a0;
- (id)init;

@end

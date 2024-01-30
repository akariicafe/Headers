@class NSArray;

@interface HMIPackageCandidateResult : HMFObject

@property (readonly) NSArray *boxes;
@property (readonly) BOOL backgroundChanged;

- (void).cxx_destruct;
- (id)initWithBoxes:(id)a0 backgroundChanged:(BOOL)a1;

@end

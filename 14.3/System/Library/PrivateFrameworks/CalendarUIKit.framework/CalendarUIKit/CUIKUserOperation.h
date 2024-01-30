@class NSArray, NSString;

@interface CUIKUserOperation : NSObject

@property (retain) NSArray *objects;
@property long long span;
@property (retain) NSArray *originalObjects;
@property (retain) NSArray *originalSliceDescriptions;
@property (retain) NSString *precomputedActionName;
@property (retain) CUIKUserOperation *precomputedInverseOperation;
@property BOOL inverseOperationPrecomputed;

- (void).cxx_destruct;

@end

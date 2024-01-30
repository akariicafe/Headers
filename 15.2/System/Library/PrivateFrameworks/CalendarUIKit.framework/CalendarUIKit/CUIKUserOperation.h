@class NSArray, NSString, EKEventStore;

@interface CUIKUserOperation : NSObject

@property (readonly, nonatomic) NSArray *objects;
@property (weak, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) long long span;
@property (retain, nonatomic) NSArray *originalObjects;
@property (retain, nonatomic) NSArray *originalSliceDescriptions;
@property (retain, nonatomic) NSString *precomputedActionName;
@property (retain, nonatomic) CUIKUserOperation *precomputedInverseOperation;
@property (nonatomic) BOOL inverseOperationPrecomputed;

- (void).cxx_destruct;

@end

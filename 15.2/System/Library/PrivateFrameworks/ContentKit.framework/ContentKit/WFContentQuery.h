@class WFContentPredicate, NSArray, NSDictionary, NSSet;

@interface WFContentQuery : NSObject <WFContentPropertyContainer>

@property (readonly, nonatomic) WFContentPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) struct _WFContentSlice { unsigned long long startIndex; unsigned long long endIndex; } slice;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSSet *containedProperties;

- (id)initWithPredicate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)runWithObjects:(id)a0 completionHandler:(id /* block */)a1;
- (void)runWithObjects:(id)a0 propertySubstitutor:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (BOOL)canEvaluateObjects:(id)a0 withPropertySubstitutor:(id /* block */)a1;

@end

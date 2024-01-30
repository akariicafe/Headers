@class NSArray;

@interface TPSRegionsValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *targetRegions;
@property (readonly, nonatomic) NSArray *excludeRegions;

- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithTargetRegions:(id)a0 excludeRegions:(id)a1;

@end

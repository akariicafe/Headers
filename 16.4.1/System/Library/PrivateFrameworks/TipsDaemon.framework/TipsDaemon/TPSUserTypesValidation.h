@class NSArray;

@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *targetUserTypes;
@property (readonly, nonatomic) NSArray *excludeUserTypes;

- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithTargetUserTypes:(id)a0 excludeUserTypes:(id)a1;

@end

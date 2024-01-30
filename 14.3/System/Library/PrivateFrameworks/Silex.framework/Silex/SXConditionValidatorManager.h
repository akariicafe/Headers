@class NSString, NSMutableArray;

@interface SXConditionValidatorManager : NSObject <SXConditionValidatorManager, SXConditionValidating>

@property (readonly, nonatomic) NSMutableArray *validators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

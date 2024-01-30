@class NSString;

@interface SXSpecVersionConditionValidator : NSObject <SXConditionValidating>

@property (readonly, copy, nonatomic) NSString *specVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSpecVersion:(id)a0;
- (BOOL)validateCondition:(id)a0 context:(id)a1;

@end

@class NSArray, NSDictionary, NSString, NSNumber;

@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) NSNumber *processId;
@property (copy, nonatomic) NSArray *contextIds;
@property (copy, nonatomic) NSDictionary *layerNamesByContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithProcessId:(id)a0 contextIds:(id)a1;

@end

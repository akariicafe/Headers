@class NSSet, NSString;

@interface HDSPSleepScheduleModelChangeEvaluation : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) BOOL isSignificantChange;
@property (readonly, nonatomic) BOOL isSignificantEventRecordUpdate;
@property (readonly, nonatomic) NSSet *topLevelChangeKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyEvaluation;
+ (id)significantChangeWithTopLevelChangeKeys:(id)a0;
+ (id)combinedEvaluation:(id)a0;
+ (id)significantEventRecordUpdateWithTopLevelChangeKeys:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIsSignificantChange:(BOOL)a0 isSignificantEventRecordUpdate:(BOOL)a1 topLevelChangeKeys:(id)a2;

@end

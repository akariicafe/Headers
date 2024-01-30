@class NSString;

@interface SXFirstViewportLayoutInstruction : NSObject <SXLayoutInstruction>

@property (nonatomic) BOOL fullfilled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didLayoutComponentBlueprint:(id)a0 blueprint:(id)a1;
- (BOOL)isFulfilledForBlueprint:(id)a0;

@end

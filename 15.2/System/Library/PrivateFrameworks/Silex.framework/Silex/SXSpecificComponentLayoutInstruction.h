@class NSString;

@interface SXSpecificComponentLayoutInstruction : NSObject <SXLayoutInstruction>

@property (readonly, nonatomic) NSString *componentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instructionWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (BOOL)isFulfilledForBlueprint:(id)a0;

@end

@class NSString;

@interface SXDefaultLayoutInstruction : NSObject <SXLayoutInstruction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instruction;

- (BOOL)isFulfilledForBlueprint:(id)a0;

@end

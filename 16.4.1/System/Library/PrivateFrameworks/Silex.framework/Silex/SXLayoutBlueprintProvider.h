@class SXLayoutBlueprint, NSString;

@interface SXLayoutBlueprintProvider : NSObject <SXLayoutBlueprintProvider>

@property (retain, nonatomic) SXLayoutBlueprint *blueprint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateBlueprint:(id)a0;

@end

@class NSString;
@protocol PMLPlanProtocol;

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol>

@property (readonly, nonatomic) id<PMLPlanProtocol> plan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)initWithPlan:(id)a0;

@end

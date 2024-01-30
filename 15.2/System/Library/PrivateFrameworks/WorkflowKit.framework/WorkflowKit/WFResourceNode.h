@class NSArray, NSString, WFResource;
@protocol WFResourceNodeDelegate;

@interface WFResourceNode : NSObject <WFResourceNodeDelegate>

@property (readonly, nonatomic) WFResource *resource;
@property (readonly, nonatomic) NSArray *subnodes;
@property (weak, nonatomic) id<WFResourceNodeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodesWithDefinitions:(id)a0;

- (id)initWithResource:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;
- (void)resourceNodeAvailabilityChanged:(id)a0;
- (id)initWithResource:(id)a0 subnodes:(id)a1;
- (void)resourceUpdated;

@end

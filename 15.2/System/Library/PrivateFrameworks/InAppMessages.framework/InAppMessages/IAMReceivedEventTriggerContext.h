@class NSString;
@protocol IAMEventProtocol;

@interface IAMReceivedEventTriggerContext : NSObject <IAMTriggerContext>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<IAMEventProtocol> event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEvent:(id)a0 bundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)satisfiesPresentationTrigger:(id)a0;

@end

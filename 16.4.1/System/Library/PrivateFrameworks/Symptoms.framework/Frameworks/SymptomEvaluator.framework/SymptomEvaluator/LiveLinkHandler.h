@class NSString;

@interface LiveLinkHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (BOOL)excludeLocalFlowsTrackingOnInterface:(id)a0;
- (BOOL)includeLocalFlowsTrackingOnInterface:(id)a0;
- (BOOL)startTrackingLiveLinkOnInterface:(id)a0;
- (BOOL)stopTrackingLiveLinkOnInterface:(id)a0;

@end

@class NSString, WFAction;

@interface WFRideOptionParameter : WFDynamicEnumerationParameter <WFActionEventObserver>

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

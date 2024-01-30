@class NSString;

@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable>

@property unsigned long long propertyUpdateGeneration;
@property (getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;

@end

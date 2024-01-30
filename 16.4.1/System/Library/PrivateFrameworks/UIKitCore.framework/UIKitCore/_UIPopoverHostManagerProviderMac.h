@class NSString;

@interface _UIPopoverHostManagerProviderMac : NSObject <_UIPopoverHostManagerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_defaultsUseNSPopover;
+ (id)sharedPopoverManager;
+ (id)managerForPresentationController:(id)a0;


@end

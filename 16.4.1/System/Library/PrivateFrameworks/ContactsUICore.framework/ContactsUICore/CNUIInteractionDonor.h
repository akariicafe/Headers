@class NSString, NSObject;
@protocol OS_os_log;

@interface CNUIInteractionDonor : NSObject <CNUIInteractionDonor>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)donateInteraction:(id)a0;

@end

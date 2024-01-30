@class NSString, NSSet;
@protocol AMSPushHandlerDelegate;

@interface AMSPushConfiguration : NSObject

@property (weak, nonatomic) id<AMSPushHandlerDelegate> delegate;
@property (retain, nonatomic) NSString *userNotificationExtensionId;
@property (retain, nonatomic) NSSet *enabledActionTypes;

- (void).cxx_destruct;
- (id)initWithEnabledActionTypes:(id)a0;

@end

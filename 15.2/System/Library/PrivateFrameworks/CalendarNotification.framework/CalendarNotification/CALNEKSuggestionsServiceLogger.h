@class NSString;

@interface CALNEKSuggestionsServiceLogger : NSObject <CALNSuggestionsServiceLogger>

@property (class, readonly, nonatomic) CALNEKSuggestionsServiceLogger *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)a0;

@end

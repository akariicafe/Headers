@class NSString, NSDictionary;

@interface BPSFollowUpAttributes : NSObject

@property (nonatomic) BOOL wantNotification;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *localizedNotificationTitle;
@property (copy, nonatomic) NSString *localizedNotificationDescription;
@property (retain, nonatomic) NSDictionary *followUpActions;

+ (id)attributeWithOptions:(id)a0;

- (void).cxx_destruct;

@end

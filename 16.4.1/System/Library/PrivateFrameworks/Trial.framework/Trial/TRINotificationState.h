@class NSString;

@interface TRINotificationState : NSObject <TRINotificationToken>

@property (readonly, nonatomic) int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithToken:(int)a0;

@end

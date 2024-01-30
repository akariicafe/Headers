@class NSString;

@interface DADClientShareResponseDelegate : DADClientDelegate <DAEventsCalendarSharingResponseConsumer>

@property (retain, nonatomic) NSString *calendarID;
@property (retain, nonatomic) NSString *shareID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)shareResponseFinishedWithError:(id)a0;
- (void)_doResponseWithBlock:(id /* block */)a0;
- (void)respondToShareRequestWithResponse:(long long)a0;
- (void)reportAsJunk;
- (id)initWithAccountID:(id)a0 client:(id)a1 calendarID:(id)a2;

@end

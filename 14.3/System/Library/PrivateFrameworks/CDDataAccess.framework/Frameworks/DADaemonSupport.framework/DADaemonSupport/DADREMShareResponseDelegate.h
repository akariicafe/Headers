@class NSString;

@interface DADREMShareResponseDelegate : DADREMXPCPerformerDelegate <DAEventsCalendarSharingResponseConsumer>

@property (retain, nonatomic) NSString *calendarID;
@property (retain, nonatomic) NSString *shareID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)shareResponseFinishedWithError:(id)a0;
- (void)_doResponseWithBlock:(id /* block */)a0;
- (id)initWithAccountID:(id)a0 calendarID:(id)a1;
- (void)respondToShareRequestWithResponse:(long long)a0;
- (void)reportAsJunk;

@end

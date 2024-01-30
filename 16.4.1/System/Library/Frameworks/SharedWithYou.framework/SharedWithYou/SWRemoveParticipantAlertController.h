@class NSString;

@interface SWRemoveParticipantAlertController : UIViewController {
    NSString *_messageText;
}

+ (id)alertControllerWithParticipant:(id)a0 highlight:(id)a1;

- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_initWithParticipant:(id)a0 highlight:(id)a1;

@end

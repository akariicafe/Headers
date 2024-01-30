@class _UIRemoteViewController, _SWPerson, SWCollaborationHighlight;

@interface _SWRemoveParticipantAlertController : UIViewController <_SWRemoveParticipantAlertRemoteControllerDelegate> {
    _UIRemoteViewController *_remoteAlertController;
}

@property (retain, nonatomic) _SWPerson *participant;
@property (retain, nonatomic) SWCollaborationHighlight *highlight;
@property (nonatomic) long long preferredStyle;

+ (id)alertControllerWithParticipant:(id)a0 highlight:(id)a1 preferredStyle:(long long)a2;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_containedRemoteViewController;
- (void)dismissAlert;
- (id)_initWithParticipant:(id)a0 highlight:(id)a1 preferredStyle:(long long)a2;

@end

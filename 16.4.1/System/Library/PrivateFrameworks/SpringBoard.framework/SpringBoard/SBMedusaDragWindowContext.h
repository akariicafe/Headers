@class SBFTraitsParticipant, UIWindow, SBTraitsWindowParticipantDelegate;
@protocol SBIconDragPreviewContaining;

@interface SBMedusaDragWindowContext : NSObject

@property (readonly, nonatomic) UIWindow<SBIconDragPreviewContaining> *dragWindow;
@property (readonly, nonatomic) SBFTraitsParticipant *traitsParticipant;
@property (readonly, nonatomic) SBTraitsWindowParticipantDelegate *traitsParticipantDelegate;

- (void).cxx_destruct;
- (id)initWithDragWindow:(id)a0 traitsParticipant:(id)a1 traitsParticipantDelegate:(id)a2;

@end

@class NSString, _UIClickInteraction;

@interface SFClickableButton : UIButton <_UIClickInteractionDelegate> {
    _UIClickInteraction *_clickInteraction;
}

@property (nonatomic, getter=isClickEnabled) BOOL clickEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

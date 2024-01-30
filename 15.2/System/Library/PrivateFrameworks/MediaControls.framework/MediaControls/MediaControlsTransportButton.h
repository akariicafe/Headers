@class MPCPlayerCommandRequest, NSString;

@interface MediaControlsTransportButton : MPButton

@property (retain, nonatomic) MPCPlayerCommandRequest *touchUpInsideCommandRequest;
@property (retain, nonatomic) MPCPlayerCommandRequest *holdBeginCommandRequest;
@property (retain, nonatomic) MPCPlayerCommandRequest *holdEndCommandRequest;
@property (nonatomic) BOOL shouldPresentActionSheet;
@property (readonly, nonatomic, getter=isPerformingHighlightAnimation) BOOL performingHighlightAnimation;
@property (nonatomic) double cursorScale;
@property (retain, nonatomic) NSString *identifier;

+ (BOOL)_cursorInteractionEnabled;

- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end

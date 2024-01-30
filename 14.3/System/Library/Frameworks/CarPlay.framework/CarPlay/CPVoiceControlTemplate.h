@class NSArray, NSString, NAFuture;

@interface CPVoiceControlTemplate : CPTemplate <CPVoiceControlTemplateDelegate>

@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, copy, nonatomic) NSArray *voiceControlStates;
@property (readonly, copy, nonatomic) NSString *activeStateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setTrailingNavigationBarButtons:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)a0;
- (id)trailingNavigationBarButtons;
- (id)initWithVoiceControlStates:(id)a0;
- (void)activateVoiceControlStateWithIdentifier:(id)a0;

@end

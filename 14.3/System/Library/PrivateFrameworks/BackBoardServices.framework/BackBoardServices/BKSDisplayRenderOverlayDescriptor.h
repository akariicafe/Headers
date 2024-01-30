@class NSString, CADisplay, BKSDisplayProgressIndicatorProperties;

@interface BKSDisplayRenderOverlayDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, BKSDisplayRenderOverlayDescribing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayUUID;
@property (nonatomic, getter=isInterstitial, setter=_setInterstitial:) BOOL interstitial;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CADisplay *display;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL lockBacklight;
@property (retain, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_classesRequiredToDecode;
+ (id)descriptorWithName:(id)a0 display:(id)a1;

- (id)_initWithName:(id)a0 displayUUID:(id)a1;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithName:(id)a0 display:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

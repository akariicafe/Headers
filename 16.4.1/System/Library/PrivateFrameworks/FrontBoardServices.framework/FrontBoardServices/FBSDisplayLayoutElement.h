@class NSString, BSMutableSettings;

@interface FBSDisplayLayoutElement : NSObject <SBSDisplayLayoutElement, NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement>

@property (readonly, nonatomic, getter=isSpringBoardElement) BOOL springBoardElement;
@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic, getter=sb_isTransitioning) BOOL sb_transitioning;
@property (readonly, nonatomic, getter=sb_isStashedPIP) BOOL sb_stashedPIP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (nonatomic) long long level;
@property (nonatomic) BOOL fillsDisplayBounds;
@property (nonatomic, getter=isUIApplicationElement) BOOL UIApplicationElement;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasKeyboardFocus;
@property (readonly, copy, nonatomic) BSMutableSettings *otherSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (Class)fallbackXPCEncodableClass;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)setOtherSettings:(id)a0;

@end

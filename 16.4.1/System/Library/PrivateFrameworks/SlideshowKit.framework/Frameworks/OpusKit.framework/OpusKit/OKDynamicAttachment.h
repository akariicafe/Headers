@class UIAttachmentBehavior, NSString;

@interface OKDynamicAttachment : NSObject <OKSettingsSupport> {
    struct UIOffset { double horizontal; double vertical; } _localOffsetFromCenter;
    NSString *_remoteWidgetName;
    union { struct UIOffset { double horizontal; double vertical; } offsetFromCenter; struct CGPoint { double x; double y; } anchorPoint; } _remote;
    double _length;
    double _damping;
    double _frequency;
    struct { unsigned char needsUpdate : 1; unsigned char hasLength : 1; unsigned char hasDamping : 1; unsigned char hasFrequency : 1; } _flags;
}

@property (readonly) UIAttachmentBehavior *behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)updateForOwningDynamicProxy:(id)a0;

@end

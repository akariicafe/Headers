@class NSString, NSMutableDictionary, UITraitCollection;

@interface UIViewConfigurationState : NSObject <_UIViewConfigurationStateReadonly, UIConfigurationState> {
    unsigned long long _mutations;
    NSMutableDictionary *_customStates;
    struct { unsigned char isDisabled : 1; unsigned char isHighlighted : 1; unsigned char isSelected : 1; unsigned char isFocused : 1; unsigned char isPinned : 1; } _stateFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _mutations;
@property (nonatomic, setter=_setContextMenuGroupLocation:) long long _contextMenuGroupLocation;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) unsigned long long _viewConfigurationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_appendPropertiesForDescription:(id)a0;
- (id)initWithTraitCollection:(id)a0;
- (void)_configureWithViewConfigurationState:(unsigned long long)a0;
- (id)customStateForKey:(id)a0;
- (void)_setSwiftBridgingCustomState:(id)a0 forKey:(id)a1;
- (void)setCustomState:(id)a0 forKey:(id)a1;
- (id)_customStatesForSwiftBridging;
- (id)_initWithState:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface UICellConfigurationState : UIViewConfigurationState <_UICellConfigurationStateReadonly> {
    struct { unsigned char isEditing : 1; unsigned char isExpanded : 1; unsigned char isSwiped : 1; unsigned char isReordering : 1; unsigned char cellDragState : 2; unsigned char cellDropState : 2; unsigned char usesAnyPlainListStyle : 1; } _cellStateFlags;
}

@property (nonatomic, setter=_setUsesAnyPlainListStyle:) BOOL _usesAnyPlainListStyle;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isSwiped) BOOL swiped;
@property (nonatomic, getter=isReordering) BOOL reordering;
@property (nonatomic) long long cellDragState;
@property (nonatomic) long long cellDropState;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isFocused) BOOL focused;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) long long _contextMenuGroupLocation;
@property (readonly, nonatomic) unsigned long long _viewConfigurationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)_appendPropertiesForDescription:(id)a0;
- (void)_configureWithViewConfigurationState:(unsigned long long)a0;
- (id)_initWithState:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

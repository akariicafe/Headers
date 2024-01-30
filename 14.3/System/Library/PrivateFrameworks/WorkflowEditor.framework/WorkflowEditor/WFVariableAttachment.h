@class UIFont, UIColor, WFVariableAttachmentCell, NSString, WFVariable;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>

@property (retain, nonatomic) WFVariableAttachmentCell *wf_attachmentCell;
@property (readonly, nonatomic) WFVariable *variable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSString *overrideVariableName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)accessibilityLabel;
- (id)description;
- (id)initWithVariable:(id)a0;
- (id)attachmentCell;
- (void)variableDidChange:(id)a0;

@end

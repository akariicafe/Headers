@class NSString, DOMHTMLFormElement;

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *name;
@property BOOL readOnly;
@property int rows;
@property int cols;
@property (readonly, copy) NSString *type;
@property (copy) NSString *defaultValue;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;
@property int selectionStart;
@property int selectionEnd;
@property (copy) NSString *accessKey;

- (void)select;
- (id)labels;
- (BOOL)required;
- (void)setMaxLength:(int)a0;
- (id)wrap;
- (int)maxLength;
- (void)setRequired:(BOOL)a0;
- (unsigned int)textLength;
- (BOOL)_isEdited;
- (id)placeholder;
- (id)dirName;
- (int)_autocapitalizeType;
- (id)endPosition;
- (void)setCanShowPlaceholder:(BOOL)a0;
- (void)setWrap:(id)a0;
- (void)setPlaceholder:(id)a0;
- (id)startPosition;
- (id)autocomplete;
- (void)setAutocomplete:(id)a0;
- (void)setDirName:(id)a0;
- (id)selectionDirection;
- (void)setSelectionDirection:(id)a0;
- (void)setRangeText:(id)a0;
- (void)setRangeText:(id)a0 start:(unsigned int)a1 end:(unsigned int)a2 selectionMode:(id)a3;
- (void)setSelectionRange:(int)a0 end:(int)a1;
- (BOOL)canShowPlaceholder;
- (int)structuralComplexityContribution;

@end

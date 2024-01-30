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

- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (id)wrap;
- (void)setCanShowPlaceholder:(BOOL)a0;
- (int)structuralComplexityContribution;
- (id)endPosition;
- (int)maxLength;
- (void)select;
- (unsigned int)textLength;
- (BOOL)_isEdited;
- (id)startPosition;
- (id)labels;
- (id)dirName;
- (void)setMaxLength:(int)a0;
- (BOOL)required;
- (void)setWrap:(id)a0;
- (void)setRequired:(BOOL)a0;
- (int)_autocapitalizeType;
- (id)autocomplete;
- (void)setAutocomplete:(id)a0;
- (void)setDirName:(id)a0;
- (id)selectionDirection;
- (void)setSelectionDirection:(id)a0;
- (void)setRangeText:(id)a0;
- (void)setRangeText:(id)a0 start:(unsigned int)a1 end:(unsigned int)a2 selectionMode:(id)a3;
- (void)setSelectionRange:(int)a0 end:(int)a1;
- (BOOL)canShowPlaceholder;

@end

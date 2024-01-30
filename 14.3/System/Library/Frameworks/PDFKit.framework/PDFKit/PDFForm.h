@class PDFFormPrivateVars;

@interface PDFForm : NSObject <NSCopying> {
    PDFFormPrivateVars *_private;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)document;
- (id)initWithDocument:(id)a0;
- (id)fieldNames;
- (id)description;
- (void)setDocument:(id)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)stringValueForFieldNamed:(id)a0;
- (void)setStringValue:(id)a0 forFieldNamed:(id)a1 postFormChangeNotification:(BOOL)a2;
- (id)fieldNamed:(id)a0;
- (void)addFormField:(id)a0;
- (void)_commonResetForm:(id)a0 inclusive:(BOOL)a1;
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)defaultStringValueForFieldNamed:(id)a0;
- (struct CGPDFString { } *)defaultDAStringRef;
- (void)removeFormFieldWithFieldName:(id)a0;
- (void)resetFormForFields:(id)a0;
- (void)resetFormExcludingFields:(id)a0;

@end

@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {
    PDFFormFieldPrivateVars *_private;
}

- (long long)buttonType;
- (id)defaultStringValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (void)setStringValue:(id)a0;
- (void)dealloc;
- (void)setFieldName:(id)a0;
- (id)document;
- (id)fieldName;
- (id)description;
- (int)fieldType;
- (void)setButtonType:(long long)a0;
- (id)stringValue;
- (void)setDocument:(id)a0;
- (struct __CFDictionary { } *)dictionaryRef;
- (struct __CFDictionary { } *)createDictionaryRef;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithAnnotation:(id)a0;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithFormDictionary:(struct CGPDFDictionary { } *)a0;
- (void)clearDictionaryRef;
- (BOOL)writeDefaultValue;
- (void)setFieldType:(int)a0;
- (void)setDefaultStringValue:(id)a0;
- (void)setWriteDefaultValue:(BOOL)a0;
- (BOOL)_isRedacted;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)commonCreateDictionaryRef:(struct __CFDictionary { } *)a0;

@end

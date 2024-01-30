@class NSString, PDFDestination, PDFAction, PDFDocument, PDFOutlinePrivate;

@interface PDFOutline : NSObject {
    PDFOutlinePrivate *_private;
}

@property (readonly, weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) PDFOutline *parent;
@property (readonly, nonatomic) unsigned long long numberOfChildren;
@property (readonly, nonatomic) unsigned long long index;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) PDFDestination *destination;
@property (retain, nonatomic) PDFAction *action;

- (id)_next;
- (id)init;
- (id)_previous;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (id)childAtIndex:(unsigned long long)a0;
- (void)_setParent:(id)a0;
- (void)setDocument:(id)a0;
- (void)removeFromParent;
- (struct __CFDictionary { } *)createDictionaryRef;
- (void)invalidateDictionaryRef;
- (id)initWithDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 parent:(id)a2;
- (void)_lazilyLoadChildren;
- (id)_childArray;
- (void)_removeChildAtIndex:(unsigned long long)a0;
- (BOOL)_childDictionaryReferencesParent:(struct CGPDFDictionary { } *)a0;
- (id)_firstChild;
- (id)_lastChild;
- (int)_openDescendantCount;
- (BOOL)_addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)_addActionToDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct CGPDFDictionary { } *)_srcDictionaryRef;

@end

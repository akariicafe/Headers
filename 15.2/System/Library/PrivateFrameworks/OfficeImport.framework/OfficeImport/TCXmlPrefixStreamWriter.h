@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {
    NSMutableArray *mStateStack;
}

- (id)currentState;
- (BOOL)addElement:(id)a0;
- (id)pushState;
- (void).cxx_destruct;
- (void)popState;
- (void)dealloc;
- (BOOL)startElement:(id)a0;
- (id)initWithTextWriterProvider:(id)a0;
- (id)pushStateWithElementPrefix:(id)a0 attributePrefix:(id)a1;
- (id)currentElementPrefix;
- (id)currentAttributePrefix;
- (BOOL)writeAttribute:(id)a0 content:(id)a1;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 content:(id)a2;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 boolContent:(BOOL)a2;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 intContent:(long long)a2;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 enumContent:(int)a2 map:(id)a3;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 doubleContent:(double)a2;
- (void)pushElementPrefix:(id)a0 attributePrefix:(id)a1;
- (id)pushStateWithSharedPrefix:(id)a0;
- (BOOL)writeAttribute:(id)a0 boolContent:(BOOL)a1;
- (BOOL)writeAttribute:(id)a0 intContent:(long long)a1;
- (BOOL)writeAttribute:(id)a0 unsignedLongContent:(unsigned long long)a1;
- (BOOL)writeAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (BOOL)writeAttribute:(id)a0 doubleContent:(double)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 content:(id)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 boolContent:(BOOL)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 intContent:(long long)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 enumContent:(int)a1 map:(id)a2;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 doubleContent:(double)a1;
- (BOOL)startOAElement:(id)a0;
- (BOOL)writeOAAttribute:(id)a0 content:(id)a1;
- (void)pushOAState;
- (BOOL)writeOAAttribute:(id)a0 boolContent:(BOOL)a1;
- (BOOL)writeOAAttribute:(id)a0 intContent:(long long)a1;
- (BOOL)writeOAAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (BOOL)writeOAAttribute:(id)a0 doubleContent:(double)a1;
- (BOOL)writeIndexAttribute:(id)a0 intContent:(unsigned long long)a1;
- (void)writeTextString:(id)a0 forElement:(id)a1;

@end

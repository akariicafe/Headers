@class NSString;

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {
    struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *mTree;
    int mWarning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTokenAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)tokenAtIndex:(unsigned long long)a0;
- (int)warningType;
- (void)setWarning:(int)a0;
- (BOOL)copyToken:(unsigned int)a0 from:(id)a1;
- (id)formula;
- (BOOL)isConstantList:(unsigned int)a0;
- (BOOL)addArrayWithCol:(int)a0 andRow:(int)a1;
- (BOOL)addInfixOperator:(int)a0 atIndex:(unsigned int)a1 factor:(double)a2;
- (char *)addToken:(int)a0 extendedDataLength:(unsigned int)a1;
- (char *)addToken:(int)a0 extendedDataLength:(unsigned int)a1 numArgs:(int)a2;
- (BOOL)argTokenIsDurationAtIndex:(unsigned int)a0;
- (int)argTokenTypeAtIndex:(unsigned int)a0;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertRefs:(unsigned int)a0 toType:(int)a1;
- (BOOL)convertRefs:(unsigned int)a0 toTypes:(int *)a1;
- (void)convertRefsInList:(struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)a0 toType:(int)a1;
- (BOOL)convertToIntersect:(unsigned int)a0;
- (BOOL)convertToList:(unsigned int)a0;
- (BOOL)convertToList:(unsigned int)a0 withFinalParen:(BOOL)a1;
- (void)copyToFormula:(id)a0;
- (BOOL)fixTableOfConstantsRef:(struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)a0;
- (BOOL)fixTableOfConstantsRefs;
- (BOOL)insertExternalName:(unsigned long long)a0 withLink:(unsigned long long)a1 atIndex:(unsigned int)a2;
- (BOOL)insertName:(unsigned long long)a0 atIndex:(unsigned int)a1;
- (BOOL)insertName:(unsigned long long)a0 link:(unsigned long long)a1 external:(BOOL)a2 atIndex:(unsigned int)a3;
- (BOOL)insertVariableFunction:(unsigned short)a0 afterIndex:(unsigned int)a1 numArgs:(unsigned int)a2;
- (BOOL)isSupportedFormula;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)a0 withEDLinks:(id)a1;
- (BOOL)makeArrayForLastToken:(unsigned long long)a0;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)a0 withMin:(unsigned short)a1 andMax:(unsigned short)a2;
- (unsigned int)removeOptionalPtgArgs:(unsigned int)a0 minArgs:(unsigned int)a1;
- (BOOL)replaceArgPtgAtIndex:(unsigned int)a0 withFormula:(id)a1;
- (void)replaceStringInStringTokenAtIndex:(unsigned long long)a0 content:(id)a1;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)a0 length:(unsigned int)a1;
- (BOOL)shrinkSpanningRef:(struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)a0;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)a0;
- (id)stringFromStringTokenAtIndex:(unsigned long long)a0;
- (struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)tokenAtIndex:(unsigned long long)a0 previousToken:(struct EDBuildablePtg **)a1;
- (int)tokenTypeAtIndex:(unsigned long long)a0;
- (BOOL)uppercaseArgAtIndex:(unsigned int)a0;
- (BOOL)wrapArgumentsWithOperator:(int)a0 argumentCount:(unsigned int)a1 atIndex:(unsigned int)a2;

@end

@interface TypistPathUtilities : NSObject

+ (id)getTextClustersFrom:(id)a0 withRegion:(id)a1;
+ (struct CGPoint { double x0; double x1; })pointOnSineCurve:(double)a0 withHeight:(double)a1 withStartPoint:(struct CGPoint { double x0; double x1; })a2 withEndPoint:(struct CGPoint { double x0; double x1; })a3 atTime:(double)a4;
+ (struct CGPoint { double x0; double x1; })_addPoint:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)_connectPath:(id)a0 forCharacters:(id)a1 withRegion:(id)a2;
+ (id)_decomposeCharactersWhereNeeded:(id)a0;
+ (id)_decomposeGraphemeIntoSeparateCharactersIfNeeded:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_determineShiftBasedOnDirection:(int)a0;
+ (id)_determineWritingStyle:(id)a0 forCharacters:(id)a1;
+ (double)_dotProduct:(struct CGPoint { double x0; double x1; })a0 and:(struct CGPoint { double x0; double x1; })a1;
+ (int)_getScribbleRuleFromRegion:(id)a0;
+ (id)_getTextClustersFrom:(id)a0 forCharacters:(id)a1;
+ (id)_getWidthAndHeight:(id)a0 forCharacters:(id)a1;
+ (id)_jamoShiftsForStructure:(int)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_makeTranslationWithOffset:(double)a0;
+ (int)_mappingRegionToVariantID:(id)a0;
+ (struct sqlite3 { } *)_openDatabaseFromFile:(id)a0;
+ (id)_processCharacters:(id)a0 withPathMap:(id)a1 forLocale:(int)a2;
+ (id)_processHangulCharacter:(unsigned short)a0 withPathMap:(id)a1 forLocale:(unsigned long long)a2;
+ (id)_processThaiCharacter:(id)a0 withPathMap:(id)a1 forLocale:(unsigned long long)a2;
+ (unsigned long long)_queryDatabase:(struct sqlite3 { } *)a0 withSql:(id)a1 forRegion:(id)a2;
+ (id)_queryHandwritingSourceForCharactersInString:(id)a0 withRegion:(id)a1;
+ (struct CGPoint { double x0; double x1; })_reflectPoint:(struct CGPoint { double x0; double x1; })a0 origin:(struct CGPoint { double x0; double x1; })a1;
+ (struct CGPoint { double x0; double x1; })_scalarMultiplyPoint:(struct CGPoint { double x0; double x1; })a0 by:(double)a1;
+ (id)_separateUniqueCharacters:(id)a0;
+ (id)_shiftPath:(id)a0 forCharacters:(id)a1 withRule:(int)a2;
+ (id)_shiftThaiStrokes:(id)a0 withRatio:(double)a1 ofHeight:(id)a2;
+ (struct CGPoint { double x0; double x1; })_subtractPoint:(struct CGPoint { double x0; double x1; })a0 byPoint:(struct CGPoint { double x0; double x1; })a1;
+ (BOOL)_validatePoints:(struct CGPoint { double x0; double x1; })a0 To:(struct CGPoint { double x0; double x1; })a1;
+ (id)convertCurveDeleteTouchPoints:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 curveHeight:(double)a2 curveDensity:(long long)a3 tilt:(double)a4;
+ (id)convertSVGPaths:(id)a0 withTransformation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (id)convertSVGStringPathToUIBezierPath:(id)a0;
+ (id)convertSingleSVGPaths:(id)a0 withTransformation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (id)convertUIBezierPathToTouchPoints:(id)a0;
+ (id)generatePathArgumentStringWithParameters:(id)a0 fromPoints:(id)a1;
+ (id)getPathData:(id)a0 fromPathMap:(id)a1;
+ (id)getPathDataForCharacters:(id)a0 withRegion:(id)a1 isCursive:(BOOL)a2;
+ (id)getStrokesForJamo:(id)a0 forVariant:(BOOL)a1 ofType:(int)a2 fromPath:(id)a3 forLocale:(unsigned long long)a4;
+ (BOOL)isKoreanConsonantVariant:(unsigned short)a0;
+ (struct CGPoint { double x0; double x1; })pointOnCurve:(id)a0 atTime:(double)a1;
+ (id)shiftJamosInSyllable:(id)a0 withPath:(id)a1 forLocale:(unsigned long long)a2;
+ (id)shiftStrokesForJamo:(id)a0 withDirection:(int)a1;

@end

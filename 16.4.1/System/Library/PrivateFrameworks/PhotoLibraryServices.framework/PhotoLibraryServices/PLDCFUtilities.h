@interface PLDCFUtilities : NSObject

+ (id)dcfCompliantNameForFileName:(id)a0 createDate:(id)a1 fileSize:(unsigned long long)a2 filenameMarker:(id)a3;
+ (void)computeSHA256OfString:(id)a0 intoBuffer:(char *)a1;
+ (id)convertHash:(unsigned int)a0 usingPlaceValues:(id)a1;
+ (id)dcfRegex;
+ (id)dcfRegexForAuxiliaryResourceFilenameMarker:(id)a0;
+ (id)encodeFileNameFromHash:(unsigned int)a0;
+ (BOOL)fileName:(id)a0 matchesRegex:(id)a1;
+ (id)fileNameByRemovingRenderMarkerInFileName:(id)a0;
+ (id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:(id)a0;
+ (unsigned int)hashForFileName:(id)a0 createDate:(id)a1 fileSize:(unsigned long long)a2;
+ (id)insertAuxiliaryResourceTypeMarker:(id)a0 intoFileName:(id)a1;
+ (BOOL)isRenderFileName:(id)a0;
+ (BOOL)isSpatialOverCaptureFileName:(id)a0;
+ (BOOL)isValidDCFFileName:(id)a0;
+ (id)makeDCFFileNameByHashingFileName:(id)a0 createDate:(id)a1 fileSize:(unsigned long long)a2;
+ (id)makeDCFFileNameFromFileName:(id)a0 createDate:(id)a1 fileSize:(unsigned long long)a2;
+ (id)placeValuesFromBases:(id)a0;
+ (id)renderDCFRegex;

@end

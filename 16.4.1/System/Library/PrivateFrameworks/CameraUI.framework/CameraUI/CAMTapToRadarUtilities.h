@interface CAMTapToRadarUtilities : NSObject

+ (void)fileRadarWithTitle:(id)a0 description:(id)a1 classification:(id)a2 reproducibility:(id)a3 componentID:(id)a4 componentName:(id)a5 componentVersion:(id)a6 keywordIdsString:(id)a7 attachmentURLs:(id)a8 includeSysDiagnose:(BOOL)a9 includePhotosDiagnose:(BOOL)a10;
+ (id)writeDictionary:(id)a0 toPlistFileWithName:(id)a1;

@end

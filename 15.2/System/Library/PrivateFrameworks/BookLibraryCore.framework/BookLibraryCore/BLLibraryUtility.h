@interface BLLibraryUtility : NSObject

+ (BOOL)_isMultiUser;
+ (id)identifierFromBookPath:(id)a0 allowHash:(BOOL)a1 allowStoreID:(BOOL)a2 error:(id *)a3;
+ (BOOL)writeBinaryPropertyList:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (id)p_opfPathFromContainerXmlDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 epubPath:(id)a1;
+ (id)generateFileUniqueIdFromPath:(id)a0;
+ (id)md5FromPath:(id)a0;
+ (id)opfPathFromEpubPath:(id)a0;
+ (id)uniqueIdFromPdfPath:(id)a0;
+ (id)identifierFromBookContainer:(id)a0 allowHash:(BOOL)a1 allowStoreID:(BOOL)a2 error:(id *)a3;
+ (id)dcIdentifierFromBookPath:(id)a0;
+ (id)_dcIdentifierFromOpfPath:(id)a0 isEPUB:(BOOL)a1;
+ (id)p_opfPathFromContainerXmlPath:(id)a0 epubPath:(id)a1;
+ (id)uniqueIdFromEpubPath:(id)a0;
+ (id)identifierFromBookPath:(id)a0 error:(id *)a1;
+ (id)identifierFromBookZipArchive:(id)a0 allowHash:(BOOL)a1 allowStoreID:(BOOL)a2 error:(id *)a3;
+ (id)_iTunesMetadataPathForEpubPath:(id)a0;
+ (id)_storeIdFromiTunesMetadataPath:(id)a0 error:(id *)a1;
+ (id)opfPathFromFullOpfContainerPath:(id)a0;

@end

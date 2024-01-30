@class NSMutableDictionary, NSDictionary, NSURL, NSMutableArray;

@interface ExifMetadataExtractor : NSObject {
    NSDictionary *desiredAppleMakerKeyPairs;
}

@property (retain) NSURL *inFileURL;
@property (retain) NSMutableArray *desiredExifKeysArray;
@property (readonly) NSMutableDictionary *metadataDictionary;
@property (readonly) NSMutableArray *facesArray;
@property (readonly) BOOL hadAllRequestedKeys;
@property BOOL saveAllMetadata;
@property (readonly) NSDictionary *allMetadata;

- (id)init;
- (void).cxx_destruct;
- (BOOL)keyIsDesired:(id)a0;
- (BOOL)copyKeysFromDictionary:(id)a0;
- (BOOL)CopyFromMakerMediaDict:(id)a0 toDict:(id)a1;
- (void)CopyFacesDataFromAuxDictionary:(id)a0 toArray:(id)a1;
- (void)performCorrectionsOnDictionary:(id)a0;
- (short)processFile;

@end

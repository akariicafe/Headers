@class NSString, PHLibraryScope, PHCollectionList, NSSortDescriptor, PHPhotoLibrary, PHAssetCollection, PHImportSource, NSMutableDictionary;

@interface PHImportOptions : NSObject {
    struct options_bits { unsigned char preserveFolderStructure : 1; unsigned char hideProgress : 1; unsigned char skipAlertWhenFinished : 1; unsigned char referencedImport : 1; unsigned char allowDuplicates : 1; unsigned char skipDiskSpaceCheck : 1; unsigned char deleteAfterImport : 1; unsigned char metadataAddMode : 1; unsigned char omitImportComplete : 1; unsigned char allowUnsupported : 1; unsigned char fileOperation : 3; unsigned char importedBy : 8; unsigned char moveToSharedLibrary : 1; } _options_bits;
}

@property (retain, nonatomic) NSString *personId;
@property (retain, nonatomic) PHImportSource *importSource;
@property (retain, nonatomic) PHPhotoLibrary *library;
@property (nonatomic) short importedBy;
@property (nonatomic) BOOL omitImportComplete;
@property (nonatomic) BOOL allowUnsupported;
@property (retain, nonatomic) PHLibraryScope *libraryScope;
@property (retain, nonatomic) PHAssetCollection *destinationAlbum;
@property (retain, nonatomic) PHCollectionList *destinationFolder;
@property (nonatomic) BOOL preserveFolderStructure;
@property (nonatomic) BOOL hideProgress;
@property (nonatomic) BOOL skipAlertWhenFinished;
@property (nonatomic) BOOL shouldImportAsReferenced;
@property (nonatomic) BOOL allowDuplicates;
@property (nonatomic) BOOL skipDiskSpaceCheck;
@property (nonatomic) BOOL deleteAfterImport;
@property (nonatomic) unsigned char fileOperation;
@property (retain, nonatomic) NSSortDescriptor *sortDescriptor;
@property (nonatomic) unsigned char metadataAddMode;
@property (retain, nonatomic) NSMutableDictionary *userIptcMetadata;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

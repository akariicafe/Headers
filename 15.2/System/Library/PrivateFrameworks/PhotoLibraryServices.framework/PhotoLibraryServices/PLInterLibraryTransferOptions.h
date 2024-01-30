@class NSSet, NSArray;

@interface PLInterLibraryTransferOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSSet *excludedEntityNames;
@property BOOL updateExistingObjects;
@property BOOL allowSavedAssetTypeChanges;
@property BOOL ignoreMissingSourceFiles;
@property (copy) NSArray *keysForDeDupe;
@property unsigned short allowDeleteOfSavedAssetTypes;

+ (id)newTransferOptionsForSyndicationToSystemPhotoLibrary;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_sortedEntityNamesAsString;
- (id)debugDescription;

@end

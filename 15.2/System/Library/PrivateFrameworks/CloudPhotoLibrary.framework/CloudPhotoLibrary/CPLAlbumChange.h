@class NSString, NSData;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying> {
    NSString *_keyAssetIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long albumType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (nonatomic) unsigned long long albumSortType;
@property (nonatomic) BOOL albumSortAscending;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSData *projectPreviewImageData;
@property (copy, nonatomic) NSString *importedByBundleIdentifier;

- (void).cxx_destruct;
- (id)propertiesDescription;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)a0;
- (BOOL)validateRecordForTracker:(id)a0;
- (id)parentScopedIdentifier;
- (void)setParentScopedIdentifier:(id)a0;

@end

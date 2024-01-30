@class NSString, NSArray, MPPlaybackArchiveConfiguration;

@interface MPMediaPickerConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long supportedContentOptions;
@property (nonatomic) unsigned long long mediaTypes;
@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (nonatomic) BOOL showsCloudItems;
@property (nonatomic) BOOL showsItemsWithProtectedAssets;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) BOOL picksSingleCollectionEntity;
@property (nonatomic) unsigned int watchCompatibilityVersion;
@property (copy, nonatomic) NSArray *typeIdentifiers;
@property (nonatomic) long long selectionMode;
@property (nonatomic) BOOL showsCatalogContent;
@property (nonatomic) BOOL showsLibraryContent;
@property (nonatomic) BOOL supportsUnavailableContent;
@property (nonatomic) BOOL pickingForExternalPlayer;
@property (retain, nonatomic) MPPlaybackArchiveConfiguration *playbackArchiveConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

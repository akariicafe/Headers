@class NSString, FPItem, NSSet, DOCTag, NSObject;
@protocol DOCNode;

@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding>

@property (class, readonly) DOCConcreteLocation *browseStartingPointsLocation;
@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL canBeRestored;
@property (retain) DOCTag *representedTag;
@property (copy) NSString *originalSourceIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *composedTitleFormat;
@property (readonly) NSString *shortDescription;
@property (readonly) BOOL isRoot;
@property (readonly) BOOL isTrash;
@property (retain) NSObject<DOCNode> *node;
@property (readonly) FPItem *fileProviderItem;
@property (copy) NSString *promptText;
@property (copy) NSString *sourceIdentifier;
@property (readonly, copy) NSString *displayName;
@property BOOL needsToResolveHierarchy;
@property (readonly) BOOL isContainer;
@property (readonly) BOOL isTaggedItemsSource;
@property (readonly) NSSet *attachedTags;
@property BOOL isFPV2;

+ (id)defaultLocation;
+ (id)searchLocation;
+ (id)defaultSaveLocation;
+ (BOOL)disableWorkaroundFor88096763;
+ (id)emptyLocation;
+ (id)iCloudDriveLocation;
+ (id)recentDocumentsLocation;
+ (id)sharedItemsLocation;
+ (id)trashedItemsLocation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(id)a0 title:(id)a1;
- (id)fileProviderSourceDisplayName;
- (id)initWithSourceIdentifier:(id)a0 node:(id)a1;
- (id)initWithTaggedItemsSourceRepresentedTag:(id)a0;
- (id)placeholderLocation;
- (void)updateUnderlyingNodeToNode:(id)a0;

@end

@class NSArray, NSString, FPItem;

@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL canBeRestored;
@property (copy) NSArray *tags;
@property (copy) NSString *originalSourceIdentifier;
@property (readonly) NSString *shortDescription;
@property (readonly) BOOL isRoot;
@property (retain) FPItem *fileProviderItem;
@property (copy) NSString *promptText;
@property (copy) NSString *sourceIdentifier;
@property (copy) NSString *title;
@property BOOL needsToResolveHierarchy;
@property BOOL isFPV2;

+ (id)searchLocation;
+ (id)defaultLocation;
+ (id)recentsLocation;
+ (id)recentDocumentsLocation;
+ (id)sharedItemsLocation;
+ (id)trashedItemsLocation;
+ (id)defaultSaveLocation;
+ (id)iCloudDriveLocation;
+ (id)emptyLocation;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTags:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSourceIdentifier:(id)a0 fileProviderItem:(id)a1;
- (id)placeholderLocation;

@end

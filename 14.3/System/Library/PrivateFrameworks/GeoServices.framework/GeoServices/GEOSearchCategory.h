@class GEOPDBrowseCategory, NSString, NSArray, NSData, NSURL, GEOFeatureStyleAttributes, GEOPDAutocompleteEntry;
@protocol GEOVenueIdentifier;

@interface GEOSearchCategory : NSObject <NSSecureCoding> {
    GEOPDBrowseCategory *_browseCategory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_suggestionEntryMetadata) NSData *suggestionEntryMetadata;
@property (readonly, nonatomic, getter=_autocompleteEntry) GEOPDAutocompleteEntry *autocompleteEntry;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *shortDisplayString;
@property (readonly, nonatomic) NSString *popularTokenString;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) NSArray *subcategories;
@property (readonly, nonatomic) id<GEOVenueIdentifier> venueIdentifier;
@property (readonly, nonatomic) int displayMode;
@property (readonly, nonatomic) int sortOrder;
@property (readonly, nonatomic) int subCategoryType;
@property (readonly, nonatomic, getter=isSubCategorySameAsTopLevel) BOOL subCategorySameAsTopLevel;
@property (readonly, nonatomic) NSURL *mapsURL;

+ (id)categoryForURL:(id)a0;
+ (void)sendFeedbackForVisibleCategories:(id)a0;

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_browseCategory;
- (id)initWithBrowseCategory:(id)a0;
- (void)sendFeedback;
- (id)initWithAutocompleteEntry:(id)a0;
- (id)serverMetadata;
- (void)encodeWithCoder:(id)a0;

@end

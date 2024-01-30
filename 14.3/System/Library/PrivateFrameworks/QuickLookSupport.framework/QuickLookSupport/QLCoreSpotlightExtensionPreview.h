@class NSString, NSURL;

@interface QLCoreSpotlightExtensionPreview : QLExtensionPreview

@property (copy) NSString *searchableItemUniqueIdentifier;
@property (copy) NSString *query;
@property (copy) NSString *searchableItemTitle;
@property (copy) NSURL *searchableItemURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithQuery:(id)a0 searchableItemURL:(id)a1 searchableItemTitle:(id)a2 searchableItemUUID:(id)a3 description:(id)a4;

@end

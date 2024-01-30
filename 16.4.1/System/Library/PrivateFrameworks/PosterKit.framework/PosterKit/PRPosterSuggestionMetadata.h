@class NSString, NSDictionary, ATXFaceGalleryItem, NSDate;

@interface PRPosterSuggestionMetadata : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXFaceGalleryItem *suggestedGalleryItem;
@property (readonly, copy, nonatomic) NSDictionary *suggestedComplicationsByIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)metadataBySettingLastModifiedDateToNow;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSuggestedGalleryItem:(id)a0 suggestedComplicationsByIdentifier:(id)a1 lastModifiedDate:(id)a2;
- (void).cxx_destruct;

@end

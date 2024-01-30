@class NSArray;

@interface PFVideoMetadataBuilder : PFMetadataBuilder

@property (readonly, copy, nonatomic) NSArray *metadataItems;

- (id)accessibilityDescriptionItem;
- (id)captionItem;
- (id)commonItemForKey:(id)a0 string:(id)a1;
- (id)creationDateItem;
- (id)keywordsItem;
- (id)locationItem;
- (id)titleItem;
- (id)videoDateFormatter;

@end

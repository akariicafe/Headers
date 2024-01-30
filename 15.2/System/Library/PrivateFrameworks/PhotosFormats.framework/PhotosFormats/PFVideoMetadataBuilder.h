@class NSArray;

@interface PFVideoMetadataBuilder : PFMetadataBuilder

@property (readonly, copy, nonatomic) NSArray *metadataItems;

- (id)titleItem;
- (id)locationItem;
- (id)commonItemForKey:(id)a0 string:(id)a1;
- (id)captionItem;
- (id)accessibilityDescriptionItem;
- (id)creationDateItem;
- (id)videoDateFormatter;
- (id)keywordsItem;

@end

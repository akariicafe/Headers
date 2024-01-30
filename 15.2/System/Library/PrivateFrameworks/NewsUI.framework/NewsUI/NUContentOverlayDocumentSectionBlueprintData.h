@class SXDocumentSectionBlueprint;

@interface NUContentOverlayDocumentSectionBlueprintData : NSObject

@property (readonly, nonatomic) SXDocumentSectionBlueprint *blueprint;
@property (readonly, nonatomic) double topOffset;

- (void).cxx_destruct;
- (id)initWithBlueprint:(id)a0 topOffset:(double)a1;

@end

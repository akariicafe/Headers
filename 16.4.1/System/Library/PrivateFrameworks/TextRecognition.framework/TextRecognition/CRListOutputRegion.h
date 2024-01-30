@class NSArray, NSString;

@interface CRListOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>

@property (readonly) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listsWithParagraphs:(id)a0;

- (unsigned long long)type;
- (id)layoutComponents;
- (BOOL)contributesToDocumentHierarchy;
- (id)initWithListItems:(id)a0;
- (id)regionsSuitableForDataDetectorOutput;

@end

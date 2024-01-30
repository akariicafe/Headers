@class TabDocument, UIView;
@protocol TabCollectionView;

@interface TabDocumentDragMetadata : NSObject

@property (readonly, weak, nonatomic) UIView<TabCollectionView> *sourceTabView;
@property (readonly, nonatomic) TabDocument *tabDocument;

- (void).cxx_destruct;
- (id)initWithTabDocument:(id)a0 sourceTabView:(id)a1;

@end

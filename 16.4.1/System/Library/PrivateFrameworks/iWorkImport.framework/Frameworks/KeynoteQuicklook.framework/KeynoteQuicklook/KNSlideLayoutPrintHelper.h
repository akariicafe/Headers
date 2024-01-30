@class NSArray, KNPrintSegment, KNSlideNode, KNRenderingExporter;
@protocol KNSlideLayoutPrintHelperDataSource;

@interface KNSlideLayoutPrintHelper : NSObject {
    NSArray *_segments;
    KNPrintSegment *_currentSegment;
    KNRenderingExporter *_renderingExporter;
}

@property (weak, nonatomic) id<KNSlideLayoutPrintHelperDataSource> dataSource;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) BOOL shouldDrawSlide;
@property (readonly, nonatomic) KNSlideNode *slideNode;
@property (readonly, nonatomic) unsigned long long buildIndex;
@property (readonly, nonatomic) unsigned long long notesIndex;
@property (readonly, nonatomic) unsigned long long notesPageIndex;
@property (readonly, nonatomic) long long commentsPageIndex;

- (void).cxx_destruct;
- (void)resetPage;
- (BOOL)incrementPage;
- (id)initWithRenderingExporter:(id)a0;
- (void)p_segmentSlideNodes;
- (id)p_segmentsForSlideNode:(id)a0;
- (void)setCurrentSlideNode:(id)a0;

@end

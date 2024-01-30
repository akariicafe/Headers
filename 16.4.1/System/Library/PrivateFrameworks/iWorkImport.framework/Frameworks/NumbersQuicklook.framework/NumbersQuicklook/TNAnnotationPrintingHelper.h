@protocol TNAnnotationPrintingHelperDataSource;

@interface TNAnnotationPrintingHelper : NSObject <TNAdditionalContentProviding>

@property (readonly, weak, nonatomic) id<TNAnnotationPrintingHelperDataSource> dataSource;
@property (readonly, nonatomic) unsigned long long numberOfAdditionalPages;
@property (readonly, nonatomic) double heightForAdditionalContent;

- (void).cxx_destruct;
- (void)drawContentForAdditionalPage:(unsigned long long)a0 inContext:(struct CGContext { } *)a1;
- (void)drawOverlayContentForPageIndex:(unsigned long long)a0 inContext:(struct CGContext { } *)a1;
- (void)drawOverlayContentInContext:(struct CGContext { } *)a0;
- (BOOL)hasOverlayContent;
- (BOOL)hasOverlayContentForPageIndex:(unsigned long long)a0;
- (id)initWithDataSource:(id)a0 documentLocale:(id)a1;

@end

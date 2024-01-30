@class NSArray;

@interface PKPaperList : NSObject

@property BOOL hasMediaReady;
@property (retain) NSArray *papers;
@property (retain) NSArray *simplexPapers;
@property (retain) NSArray *duplexPapers;
@property (retain) NSArray *photoPapers;
@property (retain, nonatomic) NSArray *rolls;

+ (id)mediaDictFromAttrs:(struct _ipp_s { } *)a0;
+ (id)paperListWithAttrs:(struct _ipp_s { } *)a0;
+ (id)paperListWithTXTRecord:(id)a0;

- (void)dealloc;
- (id)initWithAttrs:(struct _ipp_s { } *)a0;
- (id)availableRollPapersPreferBorderless:(BOOL)a0;
- (BOOL)isPaperReady:(id)a0;
- (id)matchedPaper:(id)a0 preferBorderless:(BOOL)a1 withDuplexMode:(id)a2 didMatch:(BOOL *)a3;
- (id)papersForDocumentWithSize:(struct CGSize { double x0; double x1; })a0 scaleUpOnRoll:(BOOL)a1 andDuplex:(BOOL)a2;
- (id)papersForPhotoWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)filterUsingBlock:(id /* block */)a0;
- (void)addPaperSet:(id *)a0 withCount:(int)a1 toArrays:(id *)a2;
- (id)adjustMargins:(id)a0 forDuplex:(id)a1;
- (void)categorizePapers:(id)a0;
- (id)conjureMediaFromTXT:(id)a0;
- (id)filterPapers:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasMatchingLoadedRoll:(id)a0;
- (id)initWithTXTRecord:(id)a0;
- (long long)jobTypesSupported:(id)a0;
- (id)matchPaper:(id)a0;
- (id)matchPaper:(id)a0 inList:(id)a1;
- (id)paperListForDuplexMode:(id)a0;
- (id)rollReadyPaperListForDocumentWithContentSize:(struct CGSize { double x0; double x1; })a0 scaleUp:(BOOL)a1;
- (id)rollReadyPaperListForPhotoWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { double x0; double x1; })a0 forPhoto:(BOOL)a1;
- (id)tersePaperFrom:(id)a0 withMediaInfo:(id)a1;
- (id)tersePaperFrom:(id)a0 withRequest:(id)a1;

@end

@class TSWPParagraphStyle, TSTCellStyle;

@interface TSTTableHeaderInfo : NSObject

@property (retain, nonatomic) TSTCellStyle *cellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *textStyle;
@property (nonatomic) double size;
@property (nonatomic) unsigned char hidingState;
@property (nonatomic) unsigned int numberOfCells;
@property (readonly, nonatomic) BOOL hasContent;

- (id)description;
- (void).cxx_destruct;
- (void)updateFromMetadata:(id)a0;
- (id)initFromArchive:(const void *)a0 unarchiver:(id)a1 outIndex:(unsigned int *)a2;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1 index:(unsigned int)a2;

@end

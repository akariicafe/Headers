@class TSWPParagraphStyle, TSTCellStyle;

@interface TSTTableHeaderInfo : NSObject

@property (retain, nonatomic) TSTCellStyle *cellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *textStyle;
@property (nonatomic) double size;
@property (nonatomic) unsigned char hidingState;
@property (nonatomic) unsigned short numberOfCells;

- (void)dealloc;
- (id)description;

@end

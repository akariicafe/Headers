@interface TSTLocalAccumulator : NSObject

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } idOfFirstOccurence;
@property (nonatomic) unsigned long long count;

- (id)description;

@end

@class NSArray;

@interface TSWPShapeRepStageChunk : NSObject

@property (nonatomic) long long stageIndex;
@property (retain, nonatomic) NSArray *storageRanges;

- (id)description;
- (void)dealloc;

@end

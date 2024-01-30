@class NSData;

@interface SCROBrailleDisplayStatus : NSObject

@property (retain, nonatomic) NSData *realData;
@property (retain, nonatomic) NSData *virtualData;
@property (retain, nonatomic) NSData *aggregatedData;
@property (nonatomic) int virtualAlignment;
@property (nonatomic) long long masterStatusCellIndex;

- (void).cxx_destruct;

@end

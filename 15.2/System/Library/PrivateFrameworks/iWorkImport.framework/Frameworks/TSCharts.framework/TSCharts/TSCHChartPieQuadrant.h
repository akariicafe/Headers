@class NSArray;

@interface TSCHChartPieQuadrant : NSObject

@property (readonly, copy, nonatomic) NSArray *wedgeLayoutInfos;
@property (readonly, nonatomic) unsigned long long horizontalHalfDisk;
@property (readonly, nonatomic) unsigned long long verticalHalfDisk;

- (void).cxx_destruct;
- (id)initWithWedgeLayoutInfos:(id)a0 horizontalHalfDisk:(unsigned long long)a1 verticalHalfDisk:(unsigned long long)a2;

@end

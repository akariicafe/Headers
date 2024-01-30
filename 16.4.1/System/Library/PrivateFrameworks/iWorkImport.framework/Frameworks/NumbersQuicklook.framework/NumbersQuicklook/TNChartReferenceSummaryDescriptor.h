@class TSCEViewTractRef;

@interface TNChartReferenceSummaryDescriptor : NSObject <TSCHChartSummaryDescriptor>

@property (nonatomic) unsigned long long tableType;
@property (retain, nonatomic) TSCEViewTractRef *viewTractRef;
@property (nonatomic) unsigned char groupLabelOptions;
@property (readonly, nonatomic) unsigned char rowLevel;
@property (readonly, nonatomic) unsigned char columnLevel;
@property (readonly, nonatomic) unsigned short aggregateIndex;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;

- (id)init;
- (void).cxx_destruct;
- (id)tableNameWithCalcEngine:(id)a0;

@end

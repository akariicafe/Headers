@class HKSample, NSString, HKHealthStore;

@interface HKDataMetadataReportSection : HKDataMetadataSection

@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) NSString *detailedReportName;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (id)sectionTitle;
- (void).cxx_destruct;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (id)documentImageForXMLFiles;
- (id)initWithSample:(id)a0 healthStore:(id)a1;

@end

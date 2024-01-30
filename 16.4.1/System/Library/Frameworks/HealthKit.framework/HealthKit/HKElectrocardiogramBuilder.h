@class HKQuantity, NSDate;

@interface HKElectrocardiogramBuilder : NSObject {
    struct map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::less<binarysample::ElectrocardiogramLead_Name>, std::allocator<std::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> { struct __tree<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>, std::allocator<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _leads;
    HKQuantity *_averageHeartRate;
    unsigned long long _classification;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) HKQuantity *frequency;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAverageHeartRate:(id)a0;
- (void)addClassification:(unsigned long long)a0;
- (void)addValue:(float)a0 lead:(long long)a1;
- (id)finishWithDevice:(id)a0 metadata:(id)a1;
- (id)initWithStartDate:(id)a0 frequency:(id)a1;

@end

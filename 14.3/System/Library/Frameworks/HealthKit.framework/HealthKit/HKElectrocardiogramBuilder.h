@class HKQuantity, NSDate;

@interface HKElectrocardiogramBuilder : NSObject {
    struct map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::__1::less<binarysample::ElectrocardiogramLead_Name>, std::__1::allocator<std::__1::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead> > > { struct __tree<std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__1::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__1::less<binarysample::ElectrocardiogramLead_Name>, true>, std::__1::allocator<std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__1::less<binarysample::ElectrocardiogramLead_Name>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _leads;
    HKQuantity *_averageHeartRate;
    unsigned long long _classification;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) HKQuantity *frequency;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 frequency:(id)a1;
- (void)addValue:(float)a0 lead:(long long)a1;
- (void)addAverageHeartRate:(id)a0;
- (void)addClassification:(unsigned long long)a0;
- (id)finishWithDevice:(id)a0 metadata:(id)a1;
- (id).cxx_construct;

@end

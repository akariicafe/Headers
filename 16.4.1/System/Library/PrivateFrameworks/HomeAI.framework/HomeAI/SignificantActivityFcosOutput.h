@class MLMultiArray, NSSet;

@interface SignificantActivityFcosOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob0;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset0;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset0;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll0;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw0;
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob1;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset1;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset1;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll1;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw1;
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob2;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset2;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset2;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll2;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw2;
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob3;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset3;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset3;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll3;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw3;
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob4;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset4;
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset4;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll4;
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw4;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomeSSD_class_prob0:(id)a0 HomeSSD_box0_offset0:(id)a1 HomeSSD_box1_offset0:(id)a2 HomeSSD_object_roll0:(id)a3 HomeSSD_object_yaw0:(id)a4 HomeSSD_class_prob1:(id)a5 HomeSSD_box0_offset1:(id)a6 HomeSSD_box1_offset1:(id)a7 HomeSSD_object_roll1:(id)a8 HomeSSD_object_yaw1:(id)a9 HomeSSD_class_prob2:(id)a10 HomeSSD_box0_offset2:(id)a11 HomeSSD_box1_offset2:(id)a12 HomeSSD_object_roll2:(id)a13 HomeSSD_object_yaw2:(id)a14 HomeSSD_class_prob3:(id)a15 HomeSSD_box0_offset3:(id)a16 HomeSSD_box1_offset3:(id)a17 HomeSSD_object_roll3:(id)a18 HomeSSD_object_yaw3:(id)a19 HomeSSD_class_prob4:(id)a20 HomeSSD_box0_offset4:(id)a21 HomeSSD_box1_offset4:(id)a22 HomeSSD_object_roll4:(id)a23 HomeSSD_object_yaw4:(id)a24;

@end

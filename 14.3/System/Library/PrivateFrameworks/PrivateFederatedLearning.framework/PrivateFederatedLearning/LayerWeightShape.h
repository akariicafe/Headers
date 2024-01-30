@class NSString, GPBInt32Array;

@interface LayerWeightShape : GPBMessage

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) GPBInt32Array *weightShapeArray;
@property (readonly, nonatomic) unsigned long long weightShapeArray_Count;
@property (retain, nonatomic) GPBInt32Array *biasShapeArray;
@property (readonly, nonatomic) unsigned long long biasShapeArray_Count;

+ (id)descriptor;

@end

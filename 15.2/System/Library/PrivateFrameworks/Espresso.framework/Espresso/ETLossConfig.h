@class NSString, NSArray;

@interface ETLossConfig : NSObject

@property unsigned long long mode;
@property (retain) NSString *loss_name;
@property (retain) NSString *output_name;
@property (retain) NSString *label_name;
@property (retain) NSArray *label_shape;
@property (retain) NSString *custom_network_path;

+ (id)L2Loss;
+ (id)softmaxCrossEntropyLoss;

- (void).cxx_destruct;

@end

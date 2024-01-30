@class NSString;

@interface FTTensorReference : NSObject

@property (retain, nonatomic) NSString *sourceNetworkName;
@property (retain, nonatomic) NSString *sourceOutputName;
@property (retain, nonatomic) NSString *destinationInputName;

- (void).cxx_destruct;

@end

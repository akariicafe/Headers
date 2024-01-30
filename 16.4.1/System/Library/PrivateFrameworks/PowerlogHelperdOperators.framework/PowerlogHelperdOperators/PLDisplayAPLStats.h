@class NSNumber;

@interface PLDisplayAPLStats : NSObject

@property (retain) NSNumber *avgRed;
@property (retain) NSNumber *avgGreen;
@property (retain) NSNumber *avgBlue;
@property (retain) NSNumber *frames;
@property (retain) NSNumber *avgPower;
@property (retain) NSNumber *avgAPL;

- (void).cxx_destruct;

@end

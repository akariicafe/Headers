@class NSArray;

@interface TCComputeDevice : NSObject

@property (retain, nonatomic) NSArray *devices;
@property (nonatomic) BOOL forceCPU;

- (void).cxx_destruct;
- (id)asMLCDevice;
- (id)asMLCDevice:(long long)a0;
- (id)asVNDevice;
- (id)asVNDevice:(long long)a0;
- (id)initWithDevices:(id)a0 forceCPU:(BOOL)a1;

@end

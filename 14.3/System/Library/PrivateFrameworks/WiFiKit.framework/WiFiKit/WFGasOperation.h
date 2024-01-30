@class NSSet;
@protocol WFWiFiGasProxy;

@interface WFGasOperation : WFOperation

@property (retain, nonatomic) id<WFWiFiGasProxy> gasProxy;
@property (retain, nonatomic) NSSet *networks;
@property (retain) NSSet *results;
@property unsigned long long elements;

- (void).cxx_destruct;
- (void)start;
- (id)initWithGasProxy:(id)a0 networks:(id)a1 elements:(unsigned long long)a2;
- (void)_processGasResults:(id)a0 error:(int)a1;

@end

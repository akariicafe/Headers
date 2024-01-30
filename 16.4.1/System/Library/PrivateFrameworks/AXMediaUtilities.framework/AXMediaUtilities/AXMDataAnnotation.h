@class NSString, AXMDataPoint;

@interface AXMDataAnnotation : NSObject

@property (retain, nonatomic) AXMDataPoint *location;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL playsHaptic;
@property (nonatomic) BOOL speakDuringPlayback;

- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 label:(id)a1;

@end

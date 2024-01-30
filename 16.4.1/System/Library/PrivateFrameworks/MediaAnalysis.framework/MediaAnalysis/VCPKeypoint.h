@interface VCPKeypoint : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) float confidence;

@end

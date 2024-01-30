@class EspressoBrickTensorShape;

@interface EspressoBrickTensor : NSObject

@property (retain) EspressoBrickTensorShape *shape;

- (void).cxx_destruct;
- (id)init;

@end

@class CALayer, NSString;

@interface CAStateControllerAnimation : NSObject

@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) NSString *key;

- (id)initWithLayer:(id)a0 key:(id)a1;
- (void)dealloc;

@end

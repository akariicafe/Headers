@interface NonRetainedObjectContainer : NSObject

@property (weak, nonatomic) id nonRetainedObject;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end

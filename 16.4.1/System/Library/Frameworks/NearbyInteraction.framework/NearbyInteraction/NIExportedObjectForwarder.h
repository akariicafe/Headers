@interface NIExportedObjectForwarder : NSObject

@property (weak) id exportedObject;

- (id)initWithExportedObject:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end

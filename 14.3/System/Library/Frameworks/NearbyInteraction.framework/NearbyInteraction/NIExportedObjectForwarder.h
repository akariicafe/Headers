@interface NIExportedObjectForwarder : NSObject

@property (weak) id exportedObject;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithExportedObject:(id)a0;

@end

@class PMLSessionDescriptor;

@interface SGModelSource : NSObject

@property (retain, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (retain, nonatomic) Class modelClass;

- (void).cxx_destruct;
- (id)initWithSessionDescriptor:(id)a0 modelClass:(Class)a1;

@end

@class NSArray, NSMutableSet;

@interface AVTCompositor : NSObject {
    NSMutableSet *_textureProviders;
}

@property (class, readonly, nonatomic) NSArray *propertyNames;

- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addClient:(id)a0;
- (void)skinColorDidChange;
- (void)componentDidChangeForTypes:(unsigned long long)a0;
- (void)configureMaterial:(id)a0 propertyNamed:(id)a1 memoji:(id)a2;

@end

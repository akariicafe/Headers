@interface OspreyConnectionHandle : NSObject {
    id /* block */ _willRelease;
}

@property (readonly, nonatomic) id connectionKey;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnectionKey:(id)a0 willRelease:(id /* block */)a1;

@end

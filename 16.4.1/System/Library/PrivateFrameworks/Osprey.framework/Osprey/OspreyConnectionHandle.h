@interface OspreyConnectionHandle : NSObject {
    id /* block */ _willRelease;
}

@property (readonly, nonatomic) id connectionKey;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnectionKey:(id)a0 willRelease:(id /* block */)a1;

@end

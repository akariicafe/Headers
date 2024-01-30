@class NSString, NSPointerArray;

@interface CUState : NSObject {
    unsigned long long _index;
    NSPointerArray *_lcaMap;
    CUState *_parent;
}

@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0 parent:(id)a1;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end

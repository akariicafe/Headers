@class NSArray;

@interface SKGroup : SKAction {
    struct SKCGroup { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x19; } *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:(id)a0;

- (BOOL)finished;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;
- (id)subactions;

@end

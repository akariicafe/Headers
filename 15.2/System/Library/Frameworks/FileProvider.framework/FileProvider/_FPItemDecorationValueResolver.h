@class FPItem;

@interface _FPItemDecorationValueResolver : NSObject {
    FPItem *_item;
    unsigned long long _style;
}

+ (id)resolverForItem:(id)a0 style:(unsigned long long)a1;

- (id)valueForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 style:(unsigned long long)a1;

@end

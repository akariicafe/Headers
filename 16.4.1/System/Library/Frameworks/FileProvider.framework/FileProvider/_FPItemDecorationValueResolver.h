@class FPItem;

@interface _FPItemDecorationValueResolver : NSObject {
    FPItem *_item;
    unsigned long long _style;
}

+ (id)resolverForItem:(id)a0 style:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)fp_valueForKey:(id)a0;
- (id)fp_valueForKeyPath:(id)a0;
- (id)initWithItem:(id)a0 style:(unsigned long long)a1;

@end

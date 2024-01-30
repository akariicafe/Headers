@class NSMutableArray;

@interface ESDObjectFactory : NSObject {
    struct EshObjectFactory { void /* function */ **x0; BOOL x1; } *eshObjectFactory;
    NSMutableArray *eshObjectFactoryStack;
}

+ (id)threadLocalFactory;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (struct EshObject { void /* function */ **x0; unsigned short x1; } *)createObjectWithType:(unsigned short)a0;
- (struct EshObject { void /* function */ **x0; unsigned short x1; } *)createObjectWithType:(unsigned short)a0 version:(unsigned short)a1;
- (void)replaceHostEshFactoryWith:(struct EshObjectFactory { void /* function */ **x0; BOOL x1; } *)a0;
- (void)restoreHostEshFactory;
- (void)setEshFactory:(struct EshObjectFactory { void /* function */ **x0; BOOL x1; } *)a0;

@end

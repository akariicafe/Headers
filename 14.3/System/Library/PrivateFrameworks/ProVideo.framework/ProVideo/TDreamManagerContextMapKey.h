@class EAGLContext;

@interface TDreamManagerContextMapKey : NSObject <NSCopying> {
    EAGLContext *_ctx;
}

+ (id)currentContextMapKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCTX:(id)a0;

@end

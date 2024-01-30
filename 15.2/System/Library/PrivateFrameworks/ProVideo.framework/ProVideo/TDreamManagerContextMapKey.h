@class EAGLContext;

@interface TDreamManagerContextMapKey : NSObject <NSCopying> {
    EAGLContext *_ctx;
}

+ (id)currentContextMapKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCTX:(id)a0;

@end

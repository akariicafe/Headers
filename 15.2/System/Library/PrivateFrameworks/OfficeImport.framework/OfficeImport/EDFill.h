@class EDResources;

@interface EDFill : NSObject <NSCopying> {
    EDResources *mResources;
}

+ (id)fillWithResources:(id)a0;

- (id)initWithResources:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

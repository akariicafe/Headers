@class TSSStyle;

@interface TSCHStyleAndPropertyPair : NSObject <NSCopying> {
    TSSStyle *mStyle;
    int mProperty;
}

+ (id)pairWithStyle:(id)a0 property:(int)a1;

- (int)property;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)style;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(id)a0 property:(int)a1;

@end

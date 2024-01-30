@class NSURL, NSLocale;

@interface TLTransliteratorInitParameters : NSObject <NSMutableCopying, NSCopying>

@property (copy) NSURL *modelURL;
@property (readonly, copy) NSLocale *locale;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;

@end

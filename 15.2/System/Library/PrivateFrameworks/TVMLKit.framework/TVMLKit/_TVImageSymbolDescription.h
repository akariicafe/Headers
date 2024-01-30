@class NSString, UIImageSymbolConfiguration;

@interface _TVImageSymbolDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *symbolName;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSymbolName:(id)a0 imageSymbolConfiguration:(id)a1;

@end

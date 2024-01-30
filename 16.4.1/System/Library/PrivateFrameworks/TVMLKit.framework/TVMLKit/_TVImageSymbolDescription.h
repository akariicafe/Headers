@class NSString, UIImageSymbolConfiguration;

@interface _TVImageSymbolDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *symbolName;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSymbolName:(id)a0 imageSymbolConfiguration:(id)a1;

@end

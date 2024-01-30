@class NSError;

@interface BRCErrorGrouping : NSObject <NSCopying>

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isPCSChained;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithError:(id)a0 pcsChained:(BOOL)a1;
- (BOOL)isEqualToErrorGrouping:(id)a0;

@end

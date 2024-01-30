@class NSError;

@interface BRCErrorGrouping : NSObject <NSCopying>

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isPCSChained;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithError:(id)a0 pcsChained:(BOOL)a1;
- (BOOL)isEqualToErrorGrouping:(id)a0;

@end

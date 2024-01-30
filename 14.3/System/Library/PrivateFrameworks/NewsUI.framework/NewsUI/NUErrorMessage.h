@class NSString;

@interface NUErrorMessage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

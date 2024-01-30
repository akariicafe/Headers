@class NSString;

@interface REFileImage : REImage

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) double scale;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPath:(id)a0 scale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end

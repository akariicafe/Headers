@class NSString;

@interface REFileImage : REImage

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) double scale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPath:(id)a0 scale:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end

@class NSData;

@interface REDataImage : REImage

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) double scale;

- (id)initWithData:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSData;

@interface REDataImage : REImage

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) double scale;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 scale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end

@class NSData;

@interface REDataImage : REImage

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) double scale;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 scale:(double)a1;
- (unsigned long long)hash;

@end

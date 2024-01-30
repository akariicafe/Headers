@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *dataRepresentation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

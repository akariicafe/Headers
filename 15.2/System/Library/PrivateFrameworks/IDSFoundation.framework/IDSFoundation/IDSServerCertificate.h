@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *dataRepresentation;

- (id)description;
- (id)initWithDataRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

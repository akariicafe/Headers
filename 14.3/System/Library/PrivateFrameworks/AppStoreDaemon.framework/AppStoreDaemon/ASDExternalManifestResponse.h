@class NSError, NSArray;

@interface ASDExternalManifestResponse : ASDRequestResponse

@property (copy) NSError *error;
@property (readonly, nonatomic) NSArray *results;
@property BOOL success;

+ (BOOL)supportsSecureCoding;

- (id)initWithResults:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

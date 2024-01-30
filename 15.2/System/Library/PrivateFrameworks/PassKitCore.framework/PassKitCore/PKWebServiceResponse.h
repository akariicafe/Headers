@class NSData;

@interface PKWebServiceResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *rawData;
@property (readonly, nonatomic) id JSONObject;

+ (id)responseWithData:(id)a0;
+ (BOOL)jsonDataOptional;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end

@class NSData, NSDictionary;

@interface PKWebServiceResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *rawData;
@property (readonly, nonatomic) id JSONObject;
@property (readonly, nonatomic) NSDictionary *headers;

+ (id)responseWithData:(id)a0;
+ (BOOL)jsonDataOptional;
+ (id)responseWithData:(id)a0 headers:(id)a1;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 headers:(id)a1;

@end

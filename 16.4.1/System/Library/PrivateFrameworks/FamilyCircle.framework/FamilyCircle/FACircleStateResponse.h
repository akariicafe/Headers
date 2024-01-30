@class NSError, NSDictionary;

@interface FACircleStateResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL loadSuccess;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLoadSuccess:(BOOL)a0 error:(id)a1 userInfo:(id)a2;

@end

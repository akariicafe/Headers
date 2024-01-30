@class MSServiceAppInfo, MSUserAccountInfo;

@interface MSServiceResolutionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MSServiceAppInfo *serviceAppInfo;
@property (readonly, nonatomic) MSUserAccountInfo *userAccountInfo;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServiceAppInfo:(id)a0 userAccountInfo:(id)a1;

@end

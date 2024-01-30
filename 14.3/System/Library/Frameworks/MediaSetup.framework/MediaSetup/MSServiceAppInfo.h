@class NSString, NSArray;

@interface MSServiceAppInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *serviceBundleID;
@property (retain, nonatomic) NSArray *alternateBundleIDS;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0 serviceBundleID:(id)a1;

@end

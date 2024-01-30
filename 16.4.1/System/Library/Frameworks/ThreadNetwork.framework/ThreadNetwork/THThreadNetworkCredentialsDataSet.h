@class NSData, NSString;

@interface THThreadNetworkCredentialsDataSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *dataSetArray;
@property (copy, nonatomic) NSString *userInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSetArray:(id)a0 userInfo:(id)a1;

@end

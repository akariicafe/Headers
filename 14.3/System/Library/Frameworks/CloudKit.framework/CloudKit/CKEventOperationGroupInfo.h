@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *operationGroupID;
@property (readonly, nonatomic) NSString *operationGroupName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOperationGroup:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

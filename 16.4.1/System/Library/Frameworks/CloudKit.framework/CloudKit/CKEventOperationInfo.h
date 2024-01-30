@class NSString;

@interface CKEventOperationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, copy, nonatomic) NSString *operationType;
@property (readonly, copy, nonatomic) NSString *operationGroupID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

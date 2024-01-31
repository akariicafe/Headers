@class NSString;

@interface CKEventOperationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, copy, nonatomic) NSString *operationType;
@property (readonly, copy, nonatomic) NSString *operationGroupID;

- (id)initWithOperation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

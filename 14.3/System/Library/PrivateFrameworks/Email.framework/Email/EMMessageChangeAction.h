@class NSArray;

@interface EMMessageChangeAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *objectIDs;
@property (readonly, nonatomic) long long signpostType;

- (id)initWithMessageListItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

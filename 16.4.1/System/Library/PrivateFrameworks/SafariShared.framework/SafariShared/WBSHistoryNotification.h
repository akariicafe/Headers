@class NSString, NSDictionary;

@interface WBSHistoryNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

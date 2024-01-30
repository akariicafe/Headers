@class NSString;

@interface FBSDataResetRequest : NSObject

@property (nonatomic) long long mode;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)initWithMode:(long long)a0 options:(long long)a1 reason:(id)a2;

@end

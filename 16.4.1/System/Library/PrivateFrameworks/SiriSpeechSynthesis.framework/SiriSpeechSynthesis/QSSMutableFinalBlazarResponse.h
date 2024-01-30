@class NSString;

@interface QSSMutableFinalBlazarResponse : QSSFinalBlazarResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

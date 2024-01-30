@class NSString;

@interface FTMutableFinalBlazarResponse : FTFinalBlazarResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

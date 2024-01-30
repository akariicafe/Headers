@class NSString;

@interface QSSMutableErrorBlamerResponse : QSSErrorBlamerResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *blamer_report;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

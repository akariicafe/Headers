@class NSString, NSDictionary;

@interface CNMutableActivityAlert : CNActivityAlert

@property (copy, nonatomic) NSString *sound;
@property (copy, nonatomic) NSString *vibration;
@property (nonatomic) BOOL ignoreMute;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)freeze;

@end

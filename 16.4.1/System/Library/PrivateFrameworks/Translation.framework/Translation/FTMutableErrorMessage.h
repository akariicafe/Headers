@class NSString;

@interface FTMutableErrorMessage : FTErrorMessage

@property (nonatomic) unsigned int error_code;
@property (copy, nonatomic) NSString *reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

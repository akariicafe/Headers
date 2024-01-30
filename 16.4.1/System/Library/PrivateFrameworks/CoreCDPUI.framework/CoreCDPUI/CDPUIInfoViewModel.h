@class NSString, CDPEscapeOption;

@interface CDPUIInfoViewModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) CDPEscapeOption *option1;
@property (retain, nonatomic) CDPEscapeOption *option2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

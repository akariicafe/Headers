@class NSString;

@interface VSTwoFactorEntryTextField : NSObject

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long expectedLength;
@property (nonatomic) BOOL autoShowKeyboard;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long returnKeyType;

- (id)init;
- (void).cxx_destruct;

@end

@class NSString;

@interface STKTextInputSessionData : STKTextSessionData

@property (readonly, copy, nonatomic) NSString *defaultText;
@property (readonly, nonatomic) BOOL isSecure;
@property (readonly, nonatomic) BOOL isDigitsOnly;
@property (readonly, nonatomic) unsigned long long minimumInputLength;
@property (readonly, nonatomic) unsigned long long maximumInputLength;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithText:(id)a0 simLabel:(id)a1;

@end

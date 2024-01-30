@class NSString;

@interface STKMutableTextInputSessionData : STKTextInputSessionData

@property (copy, nonatomic) NSString *defaultText;
@property (nonatomic) BOOL isSecure;
@property (nonatomic) BOOL isDigitsOnly;
@property (nonatomic) unsigned long long minimumInputLength;
@property (nonatomic) unsigned long long maximumInputLength;

- (void)setDefaultText:(id)a0;
- (void)setIsSecure:(BOOL)a0;
- (void)setIsDigitsOnly:(BOOL)a0;
- (void)setMaximumInputLength:(unsigned long long)a0;
- (void)setMinimumInputLength:(unsigned long long)a0;

@end

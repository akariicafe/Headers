@class NSString;

@interface FMDGenericMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL vibrate;
@property (retain, nonatomic) NSString *soundName;
@property (nonatomic) int soundDuration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

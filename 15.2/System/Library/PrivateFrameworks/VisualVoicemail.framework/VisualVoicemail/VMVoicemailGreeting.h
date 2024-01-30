@class NSURL;

@interface VMVoicemailGreeting : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *url;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

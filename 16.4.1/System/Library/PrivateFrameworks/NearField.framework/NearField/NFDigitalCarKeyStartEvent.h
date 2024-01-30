@class NFApplet, NSString;

@interface NFDigitalCarKeyStartEvent : NSObject <NSSecureCoding> {
    NSString *_appletIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NFApplet *applet;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSString *spIdentifier;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_setApplet:(id)a0;
- (id)initFromContactlessPaymentStartEvent:(id)a0;

@end

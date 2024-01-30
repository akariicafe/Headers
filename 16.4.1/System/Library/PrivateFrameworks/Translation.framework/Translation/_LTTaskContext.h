@class NSString, _LTLocalePair;

@interface _LTTaskContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) long long taskHint;
@property (readonly, copy, nonatomic) _LTLocalePair *localePair;
@property (readonly, copy, nonatomic) NSString *deviceOS;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, copy, nonatomic) NSString *appIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 taskHint:(long long)a1 localePair:(id)a2 deviceOS:(id)a3 deviceType:(id)a4 appIdentifier:(id)a5;

@end

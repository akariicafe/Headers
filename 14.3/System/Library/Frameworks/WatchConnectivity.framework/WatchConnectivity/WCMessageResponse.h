@class NSError;

@interface WCMessageResponse : WCMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSError *error;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSError;

@interface WCMessageResponse : WCMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end

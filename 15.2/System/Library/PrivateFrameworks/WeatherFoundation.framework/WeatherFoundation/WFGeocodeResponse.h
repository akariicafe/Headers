@class WFLocation;

@interface WFGeocodeResponse : WFResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) WFLocation *location;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 location:(id)a1;

@end

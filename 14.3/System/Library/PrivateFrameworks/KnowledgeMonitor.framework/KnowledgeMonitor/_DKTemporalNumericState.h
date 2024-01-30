@class NSNumber, NSDate;

@interface _DKTemporalNumericState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *state;
@property (retain) NSDate *timestamp;

- (void).cxx_destruct;
- (id)initWithState:(id)a0 timestamp:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end

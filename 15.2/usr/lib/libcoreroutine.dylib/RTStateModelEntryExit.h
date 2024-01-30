@interface RTStateModelEntryExit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double entry_s;
@property (nonatomic) double exit_s;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithEntry:(double)a0 exit:(double)a1;

@end

@class NSMutableDictionary;

@interface RTStateModelLegacy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableDictionary *stateModelLut;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end

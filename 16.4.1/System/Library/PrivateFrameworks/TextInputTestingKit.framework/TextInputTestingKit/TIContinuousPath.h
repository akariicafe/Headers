@class NSMutableArray;

@interface TIContinuousPath : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) NSMutableArray *samples;

- (void)encodeWithCoder:(id)a0;
- (void)addSample:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)a0;
- (id)initWithTimeStamp:(double)a0;
- (id)toJsonDictionary;

@end

@class NSString;

@interface _LTWordTimingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *word;
@property (readonly, nonatomic) unsigned int sampleIndex;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) double timestamp;

+ (id)wordTimingInfoFromArray:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFTWordTimingInfo:(id)a0;

@end

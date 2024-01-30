@class NSString;

@interface SUCoreProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) float portionComplete;
@property (nonatomic) long long totalWrittenBytes;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) double estimatedTimeRemaining;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copy;
- (id)initWithPhase:(id)a0 isStalled:(BOOL)a1 portionComplete:(float)a2 remaining:(double)a3;
- (id)initWithPhase:(id)a0 isStalled:(BOOL)a1 portionComplete:(float)a2 totalWrittenBytes:(long long)a3 totalExpectedBytes:(long long)a4 remaining:(double)a5;
- (BOOL)sameProgress:(id)a0 isStalled:(BOOL)a1 portion:(float)a2 remaining:(double)a3;

@end

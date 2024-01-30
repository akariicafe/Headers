@class NSString;

@interface SUBProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) float portionComplete;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) BOOL isDone;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;

@end

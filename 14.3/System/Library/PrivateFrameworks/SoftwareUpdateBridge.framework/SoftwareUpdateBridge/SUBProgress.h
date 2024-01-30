@class NSString;

@interface SUBProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) float portionComplete;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) BOOL isDone;

- (void).cxx_destruct;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end

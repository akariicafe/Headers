@class NSArray;

@interface EMUndoMessageAction : EMMessageChangeAction

@property (readonly, copy, nonatomic) NSArray *individualActions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIndividualActions:(id)a0;

@end

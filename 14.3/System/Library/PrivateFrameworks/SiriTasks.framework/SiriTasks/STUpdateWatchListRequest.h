@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest

@property (copy, nonatomic, setter=_setContentIdentifiersToAdd:) NSArray *contentIdentifiersToAdd;
@property (copy, nonatomic, setter=_setContentIdentifiersToRemove:) NSArray *contentIdentifiersToRemove;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

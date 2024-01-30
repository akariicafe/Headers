@class NSArray;

@interface FCBundleSubscriptionChangeSet : NSObject

@property (copy, nonatomic) NSArray *tagIDsAdded;
@property (copy, nonatomic) NSArray *tagIDsRemoved;

- (id)initWithTagIDsAdded:(id)a0 tagIDsRemoved:(id)a1;
- (void).cxx_destruct;

@end

@class NSArray;

@interface FCBundleSubscriptionChangeSet : NSObject

@property (copy, nonatomic) NSArray *tagIDsAdded;
@property (copy, nonatomic) NSArray *tagIDsRemoved;

- (void).cxx_destruct;
- (id)initWithTagIDsAdded:(id)a0 tagIDsRemoved:(id)a1;

@end

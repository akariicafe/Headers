@class NSMutableSet, NSMutableDictionary;

@interface _MSCountableMatchesContext : NSObject {
    NSMutableDictionary *_contactsCount;
}

@property (nonatomic) long long maxCount;
@property (readonly, nonatomic) NSMutableSet *highestMatches;

- (void).cxx_destruct;
- (id)init;
- (void)countInstances:(id)a0 usingPredicate:(id /* block */)a1;

@end

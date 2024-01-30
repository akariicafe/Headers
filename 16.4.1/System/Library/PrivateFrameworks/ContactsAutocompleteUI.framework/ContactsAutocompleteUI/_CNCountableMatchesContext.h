@class NSMutableSet, NSMutableDictionary;

@interface _CNCountableMatchesContext : NSObject {
    NSMutableDictionary *_contactsCount;
}

@property (nonatomic) long long maxCount;
@property (readonly, nonatomic) NSMutableSet *highestMatches;

- (id)init;
- (void).cxx_destruct;
- (void)countInstances:(id)a0 usingPredicate:(id /* block */)a1;

@end

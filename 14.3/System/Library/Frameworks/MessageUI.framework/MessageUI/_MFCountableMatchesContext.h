@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject {
    struct __CFDictionary { } *_peopleCount;
    NSMutableSet *_popularPeople;
}

@property (nonatomic) long long maxCount;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)countInstances:(id)a0 usingPredicate:(id /* block */)a1;
- (id)highestMatches;

@end

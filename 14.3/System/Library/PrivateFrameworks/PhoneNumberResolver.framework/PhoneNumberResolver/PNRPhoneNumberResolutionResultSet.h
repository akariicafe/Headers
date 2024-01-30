@class NSMutableDictionary;

@interface PNRPhoneNumberResolutionResultSet : NSObject {
    NSMutableDictionary *_results;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultsLock;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateResolutionsUsingBlock:(id /* block */)a0;
- (void)setResult:(id)a0 forPhoneNumber:(id)a1;
- (void)setError:(id)a0 forPhoneNumber:(id)a1;

@end

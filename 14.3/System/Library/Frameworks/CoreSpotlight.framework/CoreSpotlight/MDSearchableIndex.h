@interface MDSearchableIndex : CSSearchableIndex

+ (id)sharedInstance;

- (void)performIndexJob:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)indexSearchableItems:(id)a0 stateInfo:(id)a1 completionHandler:(id /* block */)a2;

@end

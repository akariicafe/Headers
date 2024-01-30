@class NSMutableDictionary;

@interface UIKeyboardSliceStore : NSObject {
    NSMutableDictionary *_store;
}

+ (id)sharedStore;
+ (void)archiveSet:(id)a0;
+ (id)sliceSetIDForKeyplaneName:(id)a0 type:(long long)a1 orientation:(long long)a2;
+ (id)sliceSetForID:(id)a0;

- (void)addSet:(id)a0;
- (id)sliceSetForID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

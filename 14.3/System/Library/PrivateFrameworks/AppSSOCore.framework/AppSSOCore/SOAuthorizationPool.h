@class NSMutableArray;

@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}

- (void)removeAuthorization:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addAuthorization:(id)a0 delegate:(id)a1;

@end

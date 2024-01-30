@class NSMutableArray;

@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}

- (void)removeAuthorization:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAuthorization:(id)a0 delegate:(id)a1;

@end

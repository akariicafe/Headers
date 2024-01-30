@class NSMutableArray;

@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}

- (void)removeAuthorization:(id)a0;
- (void)addAuthorization:(id)a0 delegate:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end

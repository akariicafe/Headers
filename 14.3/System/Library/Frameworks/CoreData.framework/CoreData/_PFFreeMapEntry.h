@class NSMutableSet;

@interface _PFFreeMapEntry : NSObject {
    int _retainCount;
    NSMutableSet *_owners;
}

- (id)init;
- (void)dealloc;

@end

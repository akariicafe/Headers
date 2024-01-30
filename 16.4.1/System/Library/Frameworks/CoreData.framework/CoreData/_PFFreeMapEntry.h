@class NSMutableSet;

@interface _PFFreeMapEntry : NSObject {
    int _retainCount;
    NSMutableSet *_owners;
}

- (void)dealloc;
- (id)init;

@end

@class NSMutableDictionary;

@interface _NSOrderedCollectionDifferenceMoves : NSObject {
    NSMutableDictionary *_removeDict;
    NSMutableDictionary *_insertDict;
    unsigned long long _firstRemove;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end

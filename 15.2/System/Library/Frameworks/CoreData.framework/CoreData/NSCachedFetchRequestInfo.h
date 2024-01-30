@class NSArray;

@interface NSCachedFetchRequestInfo : NSObject {
    NSArray *_substVarBindOrdering;
    NSArray *_substIntarrayBindOrdering;
}

- (void)dealloc;

@end

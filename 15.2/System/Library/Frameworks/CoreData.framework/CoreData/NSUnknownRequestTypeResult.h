@class NSArray;

@interface NSUnknownRequestTypeResult : NSPersistentStoreResult {
    NSArray *_subresults;
}

- (id)initWithSubresults:(id)a0;
- (void)dealloc;

@end

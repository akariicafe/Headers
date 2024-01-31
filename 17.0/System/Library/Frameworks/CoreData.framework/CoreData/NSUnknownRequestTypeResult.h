@class NSArray;

@interface NSUnknownRequestTypeResult : NSPersistentStoreResult {
    NSArray *_subresults;
}

- (void)dealloc;
- (id)initWithSubresults:(id)a0;

@end

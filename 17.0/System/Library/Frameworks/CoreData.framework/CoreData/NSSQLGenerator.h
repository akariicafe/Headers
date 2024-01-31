@class NSSQLCore;

@interface NSSQLGenerator : NSObject {
    NSSQLCore *_persistentStore;
}

+ (void)initialize;

- (id)initWithPersistentStore:(id)a0;

@end

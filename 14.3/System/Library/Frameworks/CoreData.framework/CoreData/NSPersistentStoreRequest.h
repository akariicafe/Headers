@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
    NSArray *_affectedStores;
}

@property (retain, nonatomic) NSArray *affectedStores;
@property (readonly) unsigned long long requestType;

+ (void)initialize;

- (BOOL)_secureOperation;
- (void)_setSecureOperation:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
    NSArray *_affectedStores;
}

@property (retain, nonatomic) NSArray *affectedStores;
@property (readonly) unsigned long long requestType;

+ (void)initialize;

- (void)_setSecureOperation:(BOOL)a0;
- (BOOL)_secureOperation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end

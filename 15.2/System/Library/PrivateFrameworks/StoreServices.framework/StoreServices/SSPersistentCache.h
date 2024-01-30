@class NSString, NSFileManager, NSObject;
@protocol OS_dispatch_queue;

@interface SSPersistentCache : NSObject {
    BOOL _safeKeys;
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSFileManager *_fm;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)safeKeyForKey:(id)a0;

- (id)dataForKey:(id)a0;
- (BOOL)clear;
- (BOOL)removeDataForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (id)initWithIdentifier:(id)a0 cacheName:(id)a1;
- (id)description;
- (BOOL)_isFileNotFound:(id)a0;
- (id)_pathForKey:(id)a0;
- (void)setFilenameSafeKeys:(BOOL)a0;
- (void)dealloc;

@end

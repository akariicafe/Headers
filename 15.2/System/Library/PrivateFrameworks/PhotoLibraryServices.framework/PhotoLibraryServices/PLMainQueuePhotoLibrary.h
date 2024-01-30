@interface PLMainQueuePhotoLibrary : PLPhotoLibrary {
    int _splChangedToken;
}

+ (id)systemMainQueuePhotoLibrary;
+ (void)_resetSharedInstance;

- (id)initWithName:(const char *)a0 libraryBundle:(id)a1 options:(id)a2;
- (void)dealloc;

@end

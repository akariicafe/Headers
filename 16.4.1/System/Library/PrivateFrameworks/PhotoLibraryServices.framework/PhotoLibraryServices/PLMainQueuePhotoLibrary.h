@interface PLMainQueuePhotoLibrary : PLPhotoLibrary {
    int _splChangedToken;
}

+ (void)_resetSharedInstance;
+ (id)systemMainQueuePhotoLibrary;

- (id)initWithName:(const char *)a0 libraryBundle:(id)a1 options:(id)a2;
- (void)dealloc;

@end

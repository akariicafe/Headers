@class NSString, NSArray, MPMediaLibrary, NSOperationQueue;

@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject {
    MPMediaLibrary *_underlyingMediaLibrary;
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMediaLibrary *deviceLibrary;
@property (class, readonly, nonatomic) NSString *libraryDidChangeNotificationName;
@property (class, readonly, nonatomic) NSArray *sharedLibraries;
@property (class, readonly, nonatomic) NSString *availableMediaLibrariesDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryConnectionProgressDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryStatusDidChangeNotificationName;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) float connectionProgress;

+ (void)endDiscoveringMediaLibraries;
+ (void)beginDiscoveringMediaLibraries;
+ (void)_handleAvailableLibrariesDidChangeNotification:(id)a0;

- (void)disconnect;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)connectWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)endGeneratingLibraryChangeNotifications;
- (void)performOperation:(id)a0;
- (void)_handleLibraryDidChangeNotification:(id)a0;
- (void)_handleLibraryConnectionProgressDidChangeNotification:(id)a0;
- (void)_handleLibraryStatusDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingMediaLibrary:(id)a0;
- (id)_underlyingMediaLibrary;
- (void)sdk_addItemToLibraryWithStoreID:(id)a0 completionHandler:(id /* block */)a1;

@end

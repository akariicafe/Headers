@class NSString, NSArray, STStorageApp;

@interface STStorageSharedContainer : STStorageApp {
    NSArray *_owners;
}

@property (retain) NSString *path;
@property (retain) NSArray *owners;
@property (retain) STStorageApp *appRep;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 owners:(id)a1;

@end

@class PHPersistentChangeToken, NSURL;

@interface PGLibraryChangeListenerStateStore : NSObject {
    NSURL *_changeTokenURL;
}

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;

- (id)changeToken;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)setChangeToken:(id)a0;

@end

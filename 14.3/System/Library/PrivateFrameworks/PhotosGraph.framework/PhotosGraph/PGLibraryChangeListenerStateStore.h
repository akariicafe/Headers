@class PHPersistentChangeToken, NSURL;

@interface PGLibraryChangeListenerStateStore : NSObject {
    NSURL *_changeTokenURL;
}

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)changeToken;
- (void)setChangeToken:(id)a0;

@end

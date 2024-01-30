@class NSString, MPMediaLibrary;

@interface MPMediaLibraryConnectionAssertion : NSObject {
    MPMediaLibrary *_library;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)_initWithMediaLibrary:(id)a0 identifier:(id)a1;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end

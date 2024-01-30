@class NSString;

@interface NSFileWatcherObservations : NSObject {
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetPath;
    NSString *_path;
}

- (void)notifyObserver:(id /* block */)a0;
- (id)initWithPath:(id)a0;
- (void)addDetectedMoveToPath:(id)a0;
- (id)description;
- (void)addAttributeChange;
- (void)addAnnouncedMoveToPath:(id)a0;
- (void)dealloc;
- (void)addDeletion;
- (void)addContentsChange;

@end

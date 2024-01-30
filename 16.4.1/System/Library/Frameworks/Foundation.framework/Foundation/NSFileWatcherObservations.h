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

- (id)initWithPath:(id)a0;
- (void)addContentsChange;
- (void)addDetectedMoveToPath:(id)a0;
- (void)addAttributeChange;
- (void)notifyObserver:(id /* block */)a0;
- (void)addAnnouncedMoveToPath:(id)a0;
- (void)dealloc;
- (void)addDeletion;
- (id)description;

@end

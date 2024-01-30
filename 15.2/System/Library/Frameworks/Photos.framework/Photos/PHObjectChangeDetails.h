@class PHObject;

@interface PHObjectChangeDetails : NSObject {
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    BOOL _assetContentChanged;
    BOOL _assetCollectionTitlePropertiesChanged;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (readonly, nonatomic) BOOL assetCollectionTitlePropertiesChanged;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) BOOL assetContentChanged;
@property (readonly) BOOL objectWasDeleted;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPHObject:(id)a0;
- (void)_calculateDiffs;

@end

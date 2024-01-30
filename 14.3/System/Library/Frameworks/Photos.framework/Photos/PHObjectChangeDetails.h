@class PHObject;

@interface PHObjectChangeDetails : NSObject {
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    BOOL _assetContentChanged;
    BOOL _assetCollectionTitlePropertiesChanged;
}

@property (readonly, nonatomic) BOOL assetCollectionTitlePropertiesChanged;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) BOOL assetContentChanged;
@property (readonly) BOOL objectWasDeleted;

- (void)_calculateDiffs;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPHObject:(id)a0;

@end

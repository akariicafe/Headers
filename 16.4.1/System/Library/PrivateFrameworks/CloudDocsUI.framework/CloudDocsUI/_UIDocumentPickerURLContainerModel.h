@class NSArray, _UIArrayController, NSURL, NSString, NSOperationQueue;
@protocol _UIDocumentPickerDirectoryObserver;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel <_UIArrayControllerDelegate> {
    double _startObservingTime;
    NSOperationQueue *_presentedItemOperationQueue;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) _UIArrayController<_UIDocumentPickerDirectoryObserver> *observer;
@property (retain, nonatomic) NSArray *modelObjects;
@property (copy, nonatomic) NSArray *pickableTypes;
@property (nonatomic) unsigned long long pickerMode;
@property (retain, nonatomic) id urlObserver;
@property (copy, nonatomic) NSString *displayTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allTags;
+ (id)_tagBlipColors;
+ (void)_tagColorsDidChange;
+ (id)tagColorsByTag;

- (id)scopes;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)arrayController:(id)a0 modelChanged:(id)a1 differences:(id)a2;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (id)_createObserver;
- (BOOL)afterInitialUpdate;
- (void)callUpdateHandlerWithNewItems:(id)a0 diff:(id)a1;
- (void)refreshItem:(id)a0 thumbnailOnly:(BOOL)a1;
- (BOOL)shouldAllowPickingType:(id)a0;
- (BOOL)shouldEnableContainer:(id)a0;
- (BOOL)shouldShowContainerForType:(id)a0;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (void)updateObserverForURL:(id)a0;
- (void)updateSortDescriptors;

@end

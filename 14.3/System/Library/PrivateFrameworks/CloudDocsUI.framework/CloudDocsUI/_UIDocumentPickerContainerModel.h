@class NSArray, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _UIDocumentPickerContainerModel : NSObject {
    NSObject<OS_dispatch_queue> *_underlyingQueue;
}

@property (retain, nonatomic) NSMutableArray *updateHandlers;
@property (retain, nonatomic) NSOperationQueue *thumbnailQueue;
@property (readonly, nonatomic) NSArray *modelObjects;
@property (readonly, copy, nonatomic) NSArray *pickableTypes;
@property (readonly, nonatomic) unsigned long long pickerMode;
@property (nonatomic) int sortOrder;
@property (readonly, nonatomic) BOOL afterInitialUpdate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)displayTitle;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (void)updateSortDescriptors;
- (void)refreshItem:(id)a0 thumbnailOnly:(BOOL)a1;

@end

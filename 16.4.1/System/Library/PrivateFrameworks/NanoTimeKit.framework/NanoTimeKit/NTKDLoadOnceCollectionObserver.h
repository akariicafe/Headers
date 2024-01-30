@class NSString, NTKFaceCollection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NTKDLoadOnceCollectionObserver : NSObject <NTKFaceCollectionObserver> {
    NTKFaceCollection *_collection;
    NSMutableArray *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasLoaded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

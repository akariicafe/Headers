@class NSSet, NSString, NSURL, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, NPSDomainAccessorFilePresenterDelegate;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter>

@property (retain, nonatomic) NSURL *domainURL;
@property (retain, nonatomic) NSOperationQueue *presenterOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presenterUnderlyingQueue;
@property (nonatomic, getter=isCurrent) BOOL current;
@property (readonly, weak, nonatomic) id<NPSDomainAccessorFilePresenterDelegate> delegate;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

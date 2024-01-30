@class NSString, PXGScrollViewModel;
@protocol PXGScrollViewContainerDelegate;

@interface PXGScrollViewContainerConfiguration : NSObject <PXGViewUserData>

@property (retain, nonatomic) PXGScrollViewModel *scrollViewModel;
@property (weak, nonatomic) id<PXGScrollViewContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

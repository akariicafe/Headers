@class NSString;
@protocol BNConsideringDelegate;

@interface SBExpanseBannerAuthority : NSObject <BNConsidering>

@property (weak, nonatomic) id<BNConsideringDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)shouldOverlapPresentable:(id)a0 withPresentable:(id)a1;
- (long long)shouldPresentPresentable:(id)a0 withPresentedPresentables:(id)a1 responsiblePresentable:(out id *)a2;

@end

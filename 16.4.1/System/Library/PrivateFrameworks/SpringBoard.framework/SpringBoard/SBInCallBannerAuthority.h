@class NSString;
@protocol BNConsideringDelegate;

@interface SBInCallBannerAuthority : NSObject <BNConsidering>

@property (weak, nonatomic) id<BNConsideringDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

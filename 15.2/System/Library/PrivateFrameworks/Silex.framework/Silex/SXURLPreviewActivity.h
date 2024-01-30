@class NSURL, NSString;
@protocol SXURLPreviewing;

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity>

@property (readonly, nonatomic) id<SXURLPreviewing> URLPreviewing;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

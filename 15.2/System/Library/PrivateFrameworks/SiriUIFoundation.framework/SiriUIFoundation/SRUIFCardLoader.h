@class NSString;
@protocol SRUIFCardLoaderDelegate;

@interface SRUIFCardLoader : NSObject <SFResourceLoader>

@property (weak, nonatomic) id<SRUIFCardLoaderDelegate> delegate;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

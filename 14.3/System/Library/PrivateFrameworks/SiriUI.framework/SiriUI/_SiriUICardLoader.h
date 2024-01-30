@class NSString;
@protocol _SiriUICardLoaderDelegate;

@interface _SiriUICardLoader : NSObject <SFResourceLoader>

@property (weak, nonatomic) id<_SiriUICardLoaderDelegate> delegate;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

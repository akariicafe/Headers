@class NSString;
@protocol NFResolver;

@interface SXQuickLookModule : NSObject <SXQuickLookModule>

@property (readonly, nonatomic) id<NFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResolver:(id)a0;
- (id)createViewControllerWithFile:(id)a0;

@end

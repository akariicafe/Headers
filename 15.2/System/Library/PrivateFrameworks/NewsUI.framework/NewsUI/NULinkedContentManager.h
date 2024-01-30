@class NSArray, NSString;

@interface NULinkedContentManager : NSObject <NULinkedContentProvider>

@property (readonly, nonatomic) NSArray *linkedContentProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

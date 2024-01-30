@class NSString, NSMutableDictionary;

@interface SXBookmarkManager : NSObject <SXBookmarkManager, SXBookmarkApplicatorManager>

@property (readonly, nonatomic) NSMutableDictionary *applicators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

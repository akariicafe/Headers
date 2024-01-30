@class PRLikeness, NSString;

@interface CNUIPRLikenessProvider : NSObject <CNUIPRLikenessProvider>

@property (readonly, nonatomic) PRLikeness *likeness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

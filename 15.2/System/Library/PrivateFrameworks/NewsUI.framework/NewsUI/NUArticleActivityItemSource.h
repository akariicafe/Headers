@class NSString;
@protocol FCHeadlineProviding;

@interface NUArticleActivityItemSource : NSObject <UIActivityItemSource>

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

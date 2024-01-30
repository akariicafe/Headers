@class FCIssue, NSString;
@protocol FCHeadlineProviding;

@interface NUHeadlineAdContextProvider : NSObject <NUAdContextProvider>

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, nonatomic) FCIssue *issue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class FCIssue, NSString;

@interface NUIssueAdContextProvider : NSObject <NUAdContextProvider>

@property (readonly, nonatomic) FCIssue *issue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIssue:(id)a0;
- (id)adContextValueForKeyPath:(id)a0;

@end

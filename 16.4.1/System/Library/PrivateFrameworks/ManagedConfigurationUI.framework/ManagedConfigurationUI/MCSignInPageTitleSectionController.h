@class NSString;

@interface MCSignInPageTitleSectionController : MCProfileTitlePageMetaDataSectionController

@property (copy, nonatomic) NSString *orgName;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (double)heightForHeader;
- (id)cellForRowAtIndex:(unsigned long long)a0;

@end

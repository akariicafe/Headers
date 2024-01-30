@class NSString, MCSignInPageAuthenticationCell, AKInlineSignInViewController;

@interface MCSignInPageAuthenticationSectionController : NSObject <MCProfileTitlePageSectionController>

@property (retain, nonatomic) MCSignInPageAuthenticationCell *cell;
@property (retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController;
@property (nonatomic) double authSectionHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (id)titleForHeader;
- (double)heightForHeader;
- (id)cellForRowAtIndex:(unsigned long long)a0;
- (void)registerCellClassWithTableView:(id)a0;
- (double)heightForRowAtIndex:(unsigned long long)a0;

@end

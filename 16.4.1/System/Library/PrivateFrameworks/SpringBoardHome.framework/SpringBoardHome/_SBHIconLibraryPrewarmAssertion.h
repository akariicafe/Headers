@class NSString, SBHIconLibraryTableViewController;

@interface _SBHIconLibraryPrewarmAssertion : NSObject <BSInvalidatable> {
    BOOL _invalidated;
}

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, weak, nonatomic) SBHIconLibraryTableViewController *iconLibraryTableViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 iconLibraryTableViewController:(id)a1;

@end

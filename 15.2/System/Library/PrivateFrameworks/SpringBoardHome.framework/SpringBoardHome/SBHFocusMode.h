@class SBFolder, NSString;

@interface SBHFocusMode : NSObject <SBFolderObserver>

@property (retain, nonatomic) SBFolder *folder;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *symbol;
@property (readonly, nonatomic) BOOL customizedHomeScreenPagesEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)folder:(id)a0 didAddList:(id)a1;
- (void).cxx_destruct;
- (BOOL)wantsListVisible:(id)a0;
- (void)addToList:(id)a0;
- (id)initWithIdentifier:(id)a0 folder:(id)a1;
- (void)removeFromList:(id)a0;

@end

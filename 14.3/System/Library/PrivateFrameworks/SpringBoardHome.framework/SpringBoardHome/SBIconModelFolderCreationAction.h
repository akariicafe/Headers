@class SBFolder, NSIndexPath, NSString;

@interface SBIconModelFolderCreationAction : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) SBFolder *folder;
@property (readonly, copy, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithFolder:(id)a0 indexPath:(id)a1;

@end

@class WFEvernoteAccessResource, NSString;

@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter <WFDynamicTagFieldDataSource>

@property (retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (void)wasAddedToWorkflow;
- (id)suggestedTagsForTagField:(id)a0;
- (void)setActionResources:(id)a0;
- (void)updateTags;

@end

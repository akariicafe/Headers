@class NSString;

@interface CPSAssistantCell : CPUIAssistantCell <CPSCellSizable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureWithText:(id)a0;

@end

@class NSString;

@interface HFControlPanelItemSingleControlRule : NSObject <HFControlPanelItemRule>

@property (readonly, copy, nonatomic) id /* block */ filter;
@property (readonly, copy, nonatomic) id /* block */ displayResultsGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)controlPanelItemForControlItems:(id)a0;
- (id)initWithFilter:(id /* block */)a0 displayResultsGenerator:(id /* block */)a1;

@end

@class NSDictionary, NSString, UITraitCollection;

@interface CNTestQuickActionViewContainer : NSObject <CNContactQuickActionViewContainer>

@property (readonly, nonatomic) NSDictionary *actionViewsByActionType;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActionTypes:(id)a0;
- (id)viewForActionType:(id)a0;

@end

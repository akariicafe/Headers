@class NSArray, NSDictionary;

@interface CNGroupIdentityInlineActionsViewConfiguration : NSObject

@property (readonly, nonatomic) BOOL displaysUnavailableActionTypes;
@property (readonly, nonatomic) NSArray *supportedActionTypes;
@property (readonly, nonatomic) NSDictionary *actionsPerType;
@property (readonly, nonatomic) long long actionViewStyle;

- (id)initWithActions:(id)a0 displaysUnavailableActionTypes:(BOOL)a1;
- (id)initWithDefaultActionItems:(id)a0 displaysUnavailableActionTypes:(BOOL)a1;
- (id)initWithDefaultActionItems:(id)a0 displaysUnavailableActionTypes:(BOOL)a1 actionViewStyle:(long long)a2;
- (void).cxx_destruct;

@end

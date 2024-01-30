@class NSArray, NSDictionary, NSString;

@interface CNGroupIdentityInlineActionsViewConfiguration : NSObject

@property (readonly, nonatomic) BOOL displaysUnavailableActionTypes;
@property (readonly, nonatomic) NSArray *supportedActionTypes;
@property (readonly, nonatomic) NSDictionary *actionsPerType;
@property (readonly, nonatomic) long long actionViewStyle;
@property (retain, nonatomic) NSString *geminiChannelIdentifier;

- (void).cxx_destruct;
- (id)initWithActions:(id)a0 displaysUnavailableActionTypes:(BOOL)a1;
- (id)initWithDefaultActionItems:(id)a0 displaysUnavailableActionTypes:(BOOL)a1;
- (id)initWithDefaultActionItems:(id)a0 displaysUnavailableActionTypes:(BOOL)a1 actionViewStyle:(long long)a2;

@end

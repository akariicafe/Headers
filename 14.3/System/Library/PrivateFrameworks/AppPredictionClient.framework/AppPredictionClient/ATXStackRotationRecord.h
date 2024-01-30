@class NSString, NSDate, INIntent;

@interface ATXStackRotationRecord : NSObject

@property (readonly, nonatomic) NSString *infoSuggestionId;
@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSString *criterion;
@property (readonly, nonatomic) NSString *extensionBundleId;
@property (readonly, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) BOOL isStalenessRotation;
@property (readonly, nonatomic) NSDate *rotationDate;
@property (readonly, nonatomic) double durationLimit;
@property (readonly, nonatomic) double coolDownInterval;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInfoSuggestionId:(id)a0 clientModelId:(id)a1 criterion:(id)a2 widget:(id)a3 kind:(id)a4 intent:(id)a5 isStalenessRotation:(BOOL)a6 rotationDate:(id)a7 durationLimit:(double)a8 coolDownInterval:(double)a9;

@end

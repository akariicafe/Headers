@class SXComponentAnimation, NSString, SXJSONDictionary, SXJSONArray, SXComponentConditions, SXComponentClassification;
@protocol SXComponentAnchor;

@interface SXInsertedDebugComponent : NSObject <SXDebugComponent, SXInsertableComponent> {
    NSString *_identifier;
    id<SXComponentAnchor> _anchor;
    NSString *_layout;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) SXComponentConditions *conditions;
@property (readonly, nonatomic) unsigned long long contentRelevance;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly, nonatomic) SXComponentClassification *classification;
@property (readonly, nonatomic) SXJSONArray *additions;
@property (readonly, nonatomic) NSString *layout;
@property (readonly, nonatomic) NSString *style;
@property (readonly, nonatomic) id<SXComponentAnchor> anchor;
@property (readonly, nonatomic) SXJSONArray *behaviors;
@property (readonly, nonatomic) SXComponentAnimation *animation;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SXJSONArray *conditional;

- (void)setAnchor:(id)a0;
- (void)setLayout:(id)a0;
- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;

@end

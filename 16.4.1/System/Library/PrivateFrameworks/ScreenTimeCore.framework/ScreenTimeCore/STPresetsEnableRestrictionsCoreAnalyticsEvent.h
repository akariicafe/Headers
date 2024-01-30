@class NSString, NSNumber, NSDictionary;

@interface STPresetsEnableRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) NSString *sessionId;
@property (readonly) long long selectionType;
@property (readonly) NSNumber *lowerBoundAgeRange;
@property (readonly) NSNumber *upperBoundAgeRange;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (void).cxx_destruct;
- (id)_stringDescriptionForSelectionType:(long long)a0;
- (id)initWithSessionId:(id)a0 selectionType:(long long)a1 lowerBoundAgeRange:(id)a2 upperBoundAgeRange:(id)a3;

@end

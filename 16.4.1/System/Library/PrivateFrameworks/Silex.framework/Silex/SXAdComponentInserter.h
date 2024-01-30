@class NSString;
@protocol SXComponentInsertionConditionEngine, SXAdvertisingSettingsFactory;

@interface SXAdComponentInserter : NSObject <SXComponentInserter>

@property (readonly, nonatomic) id<SXAdvertisingSettingsFactory> advertisingSettingsFactory;
@property (nonatomic) long long insertedCount;
@property (nonatomic) double lastInsertedYOffset;
@property (readonly, nonatomic) id<SXComponentInsertionConditionEngine> conditionEngine;
@property (readonly, nonatomic) unsigned long long componentTraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)conditionsForDOMObjectProvider:(id)a0;
- (unsigned long long)adTypeFromBannerType:(unsigned long long)a0;
- (id)cacheValidatorForCache:(id)a0 DOMObjectProvider:(id)a1;
- (id)componentInsertForMarker:(id)a0 DOMObjectProvider:(id)a1 layoutProvider:(id)a2;
- (void)componentInsertionCompleted;
- (id)initWithConditionEngine:(id)a0 advertisingSettingsFactory:(id)a1;
- (BOOL)validateMarker:(id)a0 DOMObjectProvider:(id)a1 layoutProvider:(id)a2;

@end

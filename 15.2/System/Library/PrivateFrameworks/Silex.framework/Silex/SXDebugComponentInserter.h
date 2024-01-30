@class NSString;
@protocol SXComponentInsertionConditionEngine;

@interface SXDebugComponentInserter : NSObject <SXComponentInserter>

@property (readonly, nonatomic) id<SXComponentInsertionConditionEngine> conditionEngine;
@property (readonly, nonatomic) unsigned long long componentTraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

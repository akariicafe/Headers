@class NSString;
@protocol SXConditionHints, SXConditionalHints;

@interface SXHints : SXJSONObject <SXHints>

@property (readonly, nonatomic) id<SXConditionHints> conditions;
@property (readonly, nonatomic) id<SXConditionalHints> conditionals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;


@end

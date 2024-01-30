@class NSArray, NSString, WFAction;
@protocol WFPropertyListObject;

@interface WFActionParameterSummary : NSObject

@property (weak, nonatomic) WFAction *action;
@property (readonly, copy, nonatomic) id<WFPropertyListObject> definition;
@property (readonly, copy, nonatomic) NSArray *possibleValues;
@property (readonly, copy, nonatomic) NSString *singleFormatString;
@property (readonly, copy, nonatomic) NSString *title;

- (id)localizedFormatString;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)initWithAction:(id)a0 definition:(id)a1;
- (id)initWithAction:(id)a0 definition:(id)a1 title:(id)a2;
- (id)explodedPossibleValuesForLocalization;
- (id)explodedSummaryStringWithKey:(id)a0 value:(id)a1;
- (id)explodedPossibleValuesForLocalizationWithParameterReplacements;
- (id)possibleValuesFromDictionary:(id)a0;
- (id)parameterReplacedString:(id)a0 withOverrides:(id)a1;
- (id)placeholderForKey:(id)a0;

@end

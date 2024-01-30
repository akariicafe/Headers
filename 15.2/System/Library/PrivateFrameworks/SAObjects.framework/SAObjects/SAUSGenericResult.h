@class NSArray, NSString, SAUIAppPunchOut, NSNumber, SAUIImageResource;

@interface SAUSGenericResult : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *actionButton;
@property (nonatomic) BOOL centered;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (retain, nonatomic) SAUIImageResource *thumbnail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *titleMaxLines;

+ (id)genericResult;
+ (id)genericResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

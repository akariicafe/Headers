@class NSString, SAUIDomainObjectPicker, NSArray;

@interface SAUIDisambiguationList : SAAceView

@property (nonatomic) BOOL autoDisambiguationDisabled;
@property (copy, nonatomic) NSString *disambiguationKey;
@property (retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *selectionResponse;
@property (copy, nonatomic) NSString *speakableDelimiter;
@property (copy, nonatomic) NSString *speakableFinalDelimiter;
@property (copy, nonatomic) NSString *speakableSelectionResponse;
@property (copy, nonatomic) NSString *speakableSuffix;
@property (copy, nonatomic) NSString *title;

+ (id)disambiguationList;
+ (id)disambiguationListWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

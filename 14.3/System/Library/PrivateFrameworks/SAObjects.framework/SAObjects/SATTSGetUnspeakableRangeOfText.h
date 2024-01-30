@class NSString, NSArray;

@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSArray *texts;

+ (id)getUnspeakableRangeOfText;
+ (id)getUnspeakableRangeOfTextWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end

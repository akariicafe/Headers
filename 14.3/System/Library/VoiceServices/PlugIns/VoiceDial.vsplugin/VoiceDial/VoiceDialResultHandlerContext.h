@class NSString, NSMutableSet, NSMutableDictionary;

@interface VoiceDialResultHandlerContext : NSObject

@property void *resultPerson;
@property struct __CFString { } *contactInfo;
@property (retain) NSString *nameToMatch;
@property (retain) NSMutableSet *compositeNames;
@property (retain) NSMutableSet *spokenCompositeNames;
@property (retain) NSMutableSet *topLevelNonNickNames;
@property (retain) NSMutableSet *localizedPhoneLabels;
@property (retain) NSMutableSet *localizedEmailLabels;
@property (retain) NSMutableSet *unlocalizedPhoneLabels;
@property (retain) NSMutableSet *unlocalizedEmailLabels;
@property (retain) NSMutableDictionary *lastNamesByFirstNames;
@property (retain) NSMutableDictionary *firstNamesByLastNames;
@property (retain) NSMutableDictionary *phoneticNamesByName;
@property long long nicknameMatchCount;
@property int resultStatus;
@property int requiredNameMatchType;
@property int lastNameMatchType;
@property BOOL allNamesMatchedType;
@property int matchedLabelType;
@property BOOL allowFirstFT;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end

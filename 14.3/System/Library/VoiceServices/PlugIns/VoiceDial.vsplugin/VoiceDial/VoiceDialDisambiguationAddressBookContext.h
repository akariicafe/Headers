@class NSString;

@interface VoiceDialDisambiguationAddressBookContext : NSObject

@property (retain) NSString *previousName;
@property int previousNameProperty;
@property (retain) NSString *matchedName;
@property id *result;
@property BOOL resultFound;

- (void).cxx_destruct;

@end

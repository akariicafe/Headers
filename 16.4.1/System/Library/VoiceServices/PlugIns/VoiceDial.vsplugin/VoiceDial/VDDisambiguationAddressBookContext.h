@class NSString, VSRecognitionResult;

@interface VDDisambiguationAddressBookContext : NSObject

@property int previousNameProperty;
@property (retain, nonatomic) NSString *previousName;
@property (retain, nonatomic) NSString *matchedName;
@property (retain, nonatomic) VSRecognitionResult *result;
@property BOOL resultFound;

- (void).cxx_destruct;

@end

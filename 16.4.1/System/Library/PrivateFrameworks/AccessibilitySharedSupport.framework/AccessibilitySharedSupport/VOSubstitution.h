@class NSString, NSData, NSSet;

@interface VOSubstitution : NSManagedObject

@property (nonatomic) BOOL appliesToAllApps;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (nonatomic) BOOL ignoreCase;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isUserSubstitution;
@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *phonemes;
@property (nonatomic) long long replacementLength;
@property (nonatomic) long long replacementLocation;
@property (copy, nonatomic) NSString *replacementString;
@property (nonatomic) short version;
@property (retain, nonatomic) NSSet *iOSBundles;
@property (retain, nonatomic) NSSet *languages;
@property (retain, nonatomic) NSSet *macOSBundles;
@property (retain, nonatomic) NSSet *voices;

+ (id)fetchRequest;

@end

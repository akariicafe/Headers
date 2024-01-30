@class NSString, NSNumber, NSDate;

@interface AAFamilyMember : NSObject

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSNumber *personID;
@property (copy, nonatomic) NSString *personIDHash;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *joinDate;
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL isChild;
@property (nonatomic) BOOL isSharingPurchases;
@property (nonatomic) BOOL isOrganizer;
@property (copy, nonatomic) NSString *iTunesNotLinkedMessage;
@property (copy, nonatomic) NSString *linkediTunesAppleID;
@property (copy, nonatomic) NSNumber *linkediTunesDSID;
@property (nonatomic) BOOL areParentalControlsEnabled;
@property (nonatomic) BOOL isAskToBuyEnabled;

- (void).cxx_destruct;

@end

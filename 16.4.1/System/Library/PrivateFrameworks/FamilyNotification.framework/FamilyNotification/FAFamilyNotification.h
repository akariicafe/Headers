@class NSString, NSDictionary, NSURL, NSDate, NSNumber, NSData;

@interface FAFamilyNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *uuid;
@property (copy) NSString *clientIdentifier;
@property (copy) NSString *delegateMachServiceName;
@property (copy) NSString *identifier;
@property (copy) NSString *title;
@property (copy) NSString *informativeText;
@property (copy) NSDate *relevanceDate;
@property (copy) NSDate *expiryDate;
@property (copy) NSNumber *familyMemberDSID;
@property unsigned long long displayStyle;
@property BOOL shouldPersistWhenActivated;
@property BOOL shouldPersistWhenDismissed;
@property (copy) NSString *actionButtonLabel;
@property (copy) NSString *otherButtonLabel;
@property BOOL hasActionButton;
@property (copy) NSString *unlockActionLabel;
@property (copy) NSURL *activateActionURL;
@property (copy) NSURL *dismissActionlURL;
@property (copy) NSURL *launchActionURL;
@property (copy) NSData *launchActionArguments;
@property (copy) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)cacheDictionaryRepresentation;
- (id)initWithCacheDictionaryRepresentation:(id)a0;

@end

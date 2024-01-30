@class NSString, NSArray;

@interface TUContactsDataProviderFetchRequest : NSObject

@property (readonly, nonatomic, getter=isVoicemail) BOOL voicemail;
@property (readonly, nonatomic, getter=isEmergency) BOOL emergency;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic, getter=isConversation) BOOL conversation;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic, getter=isIncoming) BOOL incoming;
@property (readonly, copy, nonatomic) NSString *callerNameFromNetwork;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *auxiliaryKeysToFetch;
@property (copy, nonatomic) NSString *phoneNumberPrefixHint;
@property (nonatomic) BOOL useNetworkCountryCode;

- (id)initWithHandle:(id)a0;
- (id)description;
- (id)initWithHandles:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCall:(id)a0;

@end

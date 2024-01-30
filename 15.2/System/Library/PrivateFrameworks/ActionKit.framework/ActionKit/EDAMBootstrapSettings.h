@class NSString, NSNumber;

@interface EDAMBootstrapSettings : FATObject

@property (retain, nonatomic) NSString *serviceHost;
@property (retain, nonatomic) NSString *marketingUrl;
@property (retain, nonatomic) NSString *supportUrl;
@property (retain, nonatomic) NSString *accountEmailDomain;
@property (retain, nonatomic) NSString *cardscanUrl;
@property (retain, nonatomic) NSString *announcementsUrl;
@property (retain, nonatomic) NSNumber *enableFacebookSharing;
@property (retain, nonatomic) NSNumber *enableGiftSubscriptions;
@property (retain, nonatomic) NSNumber *enableSupportTickets;
@property (retain, nonatomic) NSNumber *enableSharedNotebooks;
@property (retain, nonatomic) NSNumber *enableSingleNoteSharing;
@property (retain, nonatomic) NSNumber *enableSponsoredAccounts;
@property (retain, nonatomic) NSNumber *enableTwitterSharing;
@property (retain, nonatomic) NSNumber *enableLinkedInSharing;
@property (retain, nonatomic) NSNumber *enablePublicNotebooks;
@property (retain, nonatomic) NSNumber *enableGoogle;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

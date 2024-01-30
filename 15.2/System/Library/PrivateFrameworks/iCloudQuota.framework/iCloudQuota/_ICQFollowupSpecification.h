@class NSString, NSDictionary, NSArray, NSURL, ICQLink;

@interface _ICQFollowupSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (nonatomic) BOOL premiumOffer;
@property (retain, nonatomic) NSDictionary *serverDict;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSArray *links;
@property (copy, nonatomic) NSString *noteTitle;
@property (copy, nonatomic) NSString *noteMessage;
@property (copy, nonatomic) NSString *altNoteMessage;
@property (retain, nonatomic) ICQLink *noteActivateLink;
@property (retain, nonatomic) ICQLink *noteClearLink;
@property (nonatomic, getter=isForAccountGroup) BOOL forAccountGroup;
@property (nonatomic, getter=isZeroAction) BOOL zeroAction;
@property (nonatomic) BOOL badgeApp;
@property (nonatomic) long long followupDisplayStyle;
@property (copy, nonatomic) NSString *sfSymbolID;
@property (copy, nonatomic) NSString *sfSymbolBundlePath;
@property (readonly, nonatomic) NSURL *remoteUIURL;
@property (copy, nonatomic) NSString *notifyingAppId;

+ (void)clearLegacyFollowupWithController:(id)a0;
+ (void)clearFollowupWithController:(id)a0 isPremium:(BOOL)a1 completion:(id /* block */)a2;

- (id)initWithServerDictionary:(id)a0;
- (void)postFollowupWithController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)followupActionForLink:(id)a0 needsFlow:(BOOL)a1;
- (id)followupActionForLink:(id)a0;
- (id)identifierPrefix;
- (void)addNotifyingAppIdForItem:(id)a0;
- (void)postFollowupWithController:(id)a0;

@end

@class NSString, NSDictionary, NSArray, NSURL, ICQLink;

@interface _ICQFollowupSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (retain, nonatomic) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSArray *links;
@property (retain, nonatomic) NSString *noteTitle;
@property (retain, nonatomic) NSString *noteMessage;
@property (retain, nonatomic) NSString *altNoteMessage;
@property (retain, nonatomic) ICQLink *noteActivateLink;
@property (retain, nonatomic) ICQLink *noteClearLink;
@property (nonatomic, getter=isForAccountGroup) BOOL forAccountGroup;
@property (nonatomic, getter=isZeroAction) BOOL zeroAction;
@property (nonatomic) BOOL badgeApp;
@property (readonly, nonatomic) NSURL *remoteUIURL;

+ (void)clearFollowupWithController:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)a0;
- (void)postFollowupWithController:(id)a0 completion:(id /* block */)a1;
- (id)followupActionForLink:(id)a0 needsFlow:(BOOL)a1;
- (id)followupActionForLink:(id)a0;
- (void)postFollowupWithController:(id)a0;

@end

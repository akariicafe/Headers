@class NSString, NSArray, NSDictionary, NSURL;

@interface VUITransactionOffer : NSObject {
    NSDictionary *_transactionOfferDict;
    NSArray *_videosPlayables;
}

@property (readonly, nonatomic) BOOL playWhenDone;
@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *videosPlayables;
@property (readonly, copy, nonatomic) NSDictionary *offer;
@property (readonly, nonatomic) NSURL *sharedWatchUrl;
@property (readonly, nonatomic) BOOL initiateFamilySetup;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)notificationTitle;
- (id)notificationBody;
- (id)getCanonicalID;

@end

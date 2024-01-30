@class NSString, NSArray;

@interface NNMKSyncedAccount : NSObject

@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL shouldArchive;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) BOOL resendRequested;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *localId;

- (id)init;
- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)a0;

@end

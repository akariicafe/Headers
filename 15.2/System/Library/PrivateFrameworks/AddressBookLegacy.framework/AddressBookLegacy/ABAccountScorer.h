@class NSString, ACAccountStore;

@interface ABAccountScorer : NSObject

@property (nonatomic) void *addressBook;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) void *account;
@property (nonatomic) int defaultSourceID;
@property (nonatomic) double score;
@property (retain, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSString *accountTypeDescription;
@property (readonly, nonatomic) NSString *accountDisambiguationDescription;
@property (nonatomic) int sourceID;

- (id)initWithAddressBook:(void *)a0 accountStore:(id)a1 account:(void *)a2 defaultSourceID:(int)a3;
- (void)calculateScore;
- (int)_findBestSourceID;
- (void).cxx_destruct;
- (void)dealloc;

@end

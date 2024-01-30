@class NSString, CUPairedPeer, NSArray;

@interface CUHomeKitFindPairedPeerContext : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) CUPairedPeer *pairedPeer;
@property (nonatomic) BOOL triedAccessory;
@property (nonatomic) BOOL triedHAP;
@property (nonatomic) unsigned long long startTicks;
@property (retain, nonatomic) NSArray *users;
@property (nonatomic) unsigned long long userIndex;
@property (nonatomic) unsigned long long userCount;

- (void).cxx_destruct;

@end

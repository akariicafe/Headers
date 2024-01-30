@class NSNumber, NSString;

@interface SSFamilyMember : NSObject <SSXPCCoding>

@property (retain, nonatomic) NSNumber *iTunesIdentifier;
@property (retain, nonatomic) NSNumber *iCloudIdentifier;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *iCloudAccountName;
@property (nonatomic, getter=isMe) BOOL me;
@property (nonatomic, getter=isSharingPurchases) BOOL sharingPurchases;
@property (readonly, nonatomic) BOOL askToBuy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)initWithCacheRepresentation:(id)a0;
- (id)newCacheRepresentation;

@end

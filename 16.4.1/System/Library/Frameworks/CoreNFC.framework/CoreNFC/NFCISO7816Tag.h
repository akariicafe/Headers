@class NSString, NSData;

@interface NFCISO7816Tag : NFCTag <NFCISO7816Tag>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *initialSelectedAID;
@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, copy, nonatomic) NSData *historicalBytes;
@property (readonly, copy, nonatomic) NSData *applicationData;
@property (readonly, nonatomic) BOOL proprietaryApplicationDataCoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sendCommandAPDU:(id)a0 completionHandler:(id /* block */)a1;

@end

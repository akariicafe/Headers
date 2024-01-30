@class NSString, NSData;
@protocol NFCReaderSession;

@interface NFCISO7816Tag : NFCTag <NFCISO7816Tag>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *initialSelectedAID;
@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, copy, nonatomic) NSData *historicalBytes;
@property (readonly, copy, nonatomic) NSData *applicationData;
@property (readonly, nonatomic) BOOL proprietaryApplicationDataCoding;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) id<NFCReaderSession> session;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sendCommandAPDU:(id)a0 completionHandler:(id /* block */)a1;

@end

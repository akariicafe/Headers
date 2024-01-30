@class NSData, NSString;
@protocol NFCReaderSession;

@interface NFCMiFareTag : NFCTag <NFCMiFareTag>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long mifareFamily;
@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, copy, nonatomic) NSData *historicalBytes;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) id<NFCReaderSession> session;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSession:(id)a0 tag:(id)a1 startupConfig:(long long)a2;
- (void)sendMiFareCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendMiFareISO7816Command:(id)a0 completionHandler:(id /* block */)a1;

@end

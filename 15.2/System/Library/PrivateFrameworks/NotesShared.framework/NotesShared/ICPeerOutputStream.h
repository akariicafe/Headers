@class NSMutableData, NSString, NSOutputStream;

@interface ICPeerOutputStream : NSObject <NSStreamDelegate>

@property (retain, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOutputStream:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)writeData;
- (void)writeMessageData:(id)a0;

@end

@class NSMutableData, NSString, NSInputStream;
@protocol ICPeerInputStreamDelegate;

@interface ICPeerInputStream : NSObject <NSStreamDelegate>

@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) BOOL isMessage;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (weak, nonatomic) id<ICPeerInputStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)initWithInputStream:(id)a0;
- (void)startReadLength;
- (void)startReadMessage:(unsigned long long)a0;
- (void)readDataFrom:(id)a0;

@end

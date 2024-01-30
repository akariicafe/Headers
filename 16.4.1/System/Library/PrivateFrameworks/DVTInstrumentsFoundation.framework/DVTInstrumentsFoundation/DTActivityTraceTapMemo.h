@class DTXMessage, NSData;

@interface DTActivityTraceTapMemo : DTTapDataMemo {
    DTXMessage *_message;
    NSData *_data;
}

@property (nonatomic) unsigned long long lastMachContinuousTimeSeen;

- (id)initWithData:(id)a0;
- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (const void *)getBufferWithLength:(unsigned long long *)a0;

@end

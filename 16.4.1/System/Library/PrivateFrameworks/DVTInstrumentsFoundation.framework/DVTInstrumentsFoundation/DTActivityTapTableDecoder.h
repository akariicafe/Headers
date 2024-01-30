@class XRIntKeyedDictionary, NSString, XRConstantEngineeringValue, NSMutableData, NSMutableArray, DTActivityTraceTapMemo;

@interface DTActivityTapTableDecoder : NSObject {
    NSMutableArray *_memos;
    DTActivityTraceTapMemo *_currentChunk;
    NSMutableData *_stack;
    struct unique_ptr<DTTableRowDecoder, std::default_delete<DTTableRowDecoder>> { struct __compressed_pair<DTTableRowDecoder *, std::default_delete<DTTableRowDecoder>> { struct DTTableRowDecoder *__value_; } __ptr_; } _tableRowDecoder;
    struct unique_ptr<DTStateActionDecoder, std::default_delete<DTStateActionDecoder>> { struct __compressed_pair<DTStateActionDecoder *, std::default_delete<DTStateActionDecoder>> { struct DTStateActionDecoder *__value_; } __ptr_; } _decoder;
    unsigned char _osLogTableID;
    XRIntKeyedDictionary *_processesByPID;
    XRIntKeyedDictionary *_threadsByTID;
    char _buffer[1024];
    struct { unsigned char time; unsigned char category; unsigned char subsystem; unsigned char senderImagePath; unsigned char format; unsigned char message; unsigned char backtrace; unsigned char process; unsigned char thread; unsigned char messageType; unsigned char senderImageUUID; unsigned char senderImageOffset; unsigned char senderImageName; } _columns;
}

@property (readonly, nonatomic, getter=isOutOfData) BOOL outOfData;
@property (readonly, nonatomic, getter=hasFailed) BOOL failed;
@property (readonly, nonatomic) unsigned long long time;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) XRConstantEngineeringValue *message;
@property (readonly, nonatomic) XRConstantEngineeringValue *backtrace;
@property (readonly, nonatomic) XRConstantEngineeringValue *process;
@property (readonly, nonatomic) XRConstantEngineeringValue *thread;
@property (readonly, nonatomic) unsigned char messageType;
@property (readonly, nonatomic) NSString *senderImagePath;
@property (readonly, nonatomic) NSString *senderImageName;
@property (readonly, nonatomic) XRConstantEngineeringValue *senderImageUUID;
@property (readonly, nonatomic) unsigned long long senderImageOffset;

- (BOOL)next;
- (id).cxx_construct;
- (void)addData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addMemo:(id)a0;

@end

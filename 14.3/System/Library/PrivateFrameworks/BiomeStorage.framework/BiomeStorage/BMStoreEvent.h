@class BMFrame;
@protocol BMStoreData;

@interface BMStoreEvent : NSObject <NSSecureCoding> {
    id<BMStoreData> _eventBody;
    double _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BMFrame *frame;
@property (retain, nonatomic) Class dataType;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) id<BMStoreData> eventBody;
@property (readonly, nonatomic) unsigned char error;

+ (id)eventWithEventType:(Class)a0 eventData:(id)a1 dataVersion:(unsigned int)a2;

- (id)init;
- (void)dealloc;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(id)a0 error:(unsigned char)a1;
- (id)initWithEventBody:(id)a0 timestamp:(double)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

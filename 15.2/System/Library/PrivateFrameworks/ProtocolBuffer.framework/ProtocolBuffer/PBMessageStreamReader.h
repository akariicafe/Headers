@class NSInputStream;

@interface PBMessageStreamReader : NSObject {
    NSInputStream *_stream;
}

@property (nonatomic) Class classOfNextMessage;
@property (readonly, nonatomic) unsigned long long position;

- (id)initWithStream:(id)a0;
- (void).cxx_destruct;
- (id)nextMessage;

@end

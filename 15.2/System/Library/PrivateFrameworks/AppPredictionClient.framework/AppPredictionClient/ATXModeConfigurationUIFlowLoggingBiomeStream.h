@class NSString, BMStoreStream;

@interface ATXModeConfigurationUIFlowLoggingBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStoreConfig:(id)a0;
- (void)deleteAllEvents;

@end

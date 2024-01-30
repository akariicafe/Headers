@class DAMailMessage, NSMutableData, NSString;
@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {
    BOOL _triedCreatingAlternatePartConsumer;
    BOOL _didBeginStreaming;
    BOOL _succeeded;
}

@property (nonatomic) int requestedFormat;
@property (retain, nonatomic) id<MFCollectingDataConsumer> dataConsumer;
@property (retain, nonatomic) id<MFCollectingDataConsumer> alternatePartConsumer;
@property (retain, nonatomic) id<MFMessageDataConsumerFactory> consumerFactory;
@property (readonly, nonatomic) DAMailMessage *message;
@property (readonly, nonatomic) NSMutableData *bodyData;
@property (readonly, nonatomic) double timeOfLastActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)succeeded;
- (id)data;
- (void).cxx_destruct;
- (void)consumeData:(char *)a0 length:(int)a1 format:(int)a2 mailMessage:(id)a3;
- (id)dataConsumerForPart:(id)a0;
- (BOOL)didBeginStreaming;
- (void)didEndStreamingForMailMessage:(id)a0;
- (BOOL)shouldBeginStreamingForMailMessage:(id)a0 format:(int)a1;

@end

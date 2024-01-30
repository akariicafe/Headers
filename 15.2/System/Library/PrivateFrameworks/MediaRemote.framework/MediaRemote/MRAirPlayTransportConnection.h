@class MROSTransaction, NSString, AVOutputContextCommunicationChannel, NSDate, APReceiverMediaRemoteCommunicationChannel, AVOutputDeviceCommunicationChannel;

@interface MRAirPlayTransportConnection : MRExternalDeviceTransportConnection <AVOutputDeviceCommunicationChannelDelegate>

@property (nonatomic) BOOL channelClosed;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSDate *mostRecentMessageSentDate;
@property (nonatomic) unsigned long long totalMessagesSentCount;
@property (nonatomic) unsigned long long totalBytesSentCount;
@property (retain, nonatomic) NSDate *mostRecentMessageReceivedDate;
@property (nonatomic) unsigned long long totalMessagesReceivedCount;
@property (nonatomic) unsigned long long totalBytesReceivedCount;
@property (retain, nonatomic) MROSTransaction *transaction;
@property (readonly, nonatomic) id effectiveChannel;
@property (readonly, nonatomic) APReceiverMediaRemoteCommunicationChannel *apCommunicationChannel;
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *outputContextCommunicationChannel;
@property (readonly, nonatomic) AVOutputDeviceCommunicationChannel *outputDeviceCommunicationChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeWithError:(id)a0;
- (void)communicationChannel:(id)a0 didReceiveData:(id)a1;
- (void)communicationChannelDidClose:(id)a0;
- (void)ingestData:(id)a0;
- (id)initWithOutputDeviceCommunicationChannel:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)_sendTransportData:(id)a0;
- (id)initWithAPCommunicationChannel:(id)a0;
- (id)initWithOutputContextCommunicationChannel:(id)a0 outputContext:(id)a1;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;
- (BOOL)isValid;

@end

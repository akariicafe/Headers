@class MFMimePart, MFMessage;
@protocol MFCollectingDataConsumer;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {
    MFMessage *_message;
    MFMimePart *_topLevelPart;
    unsigned char _allowsPartialDownloads : 1;
    unsigned char _usingPartialDownloads : 1;
    unsigned char _startedFetch : 1;
    unsigned char _fetchingMessageContents : 1;
    unsigned char _fetchingBodyText : 1;
    unsigned char _doneAddingSubdownloads : 1;
    unsigned char _fetchBodyData : 1;
    id<MFCollectingDataConsumer> _headerConsumer;
    id<MFCollectingDataConsumer> _textConsumer;
    BOOL _receivedHeaders;
    BOOL _receivedText;
}

- (void).cxx_destruct;
- (id)data;
- (id)topLevelPart;
- (BOOL)isComplete;
- (id)message;
- (id)initWithMessage:(id)a0;
- (BOOL)partial;
- (void)setTopLevelPart:(id)a0;
- (BOOL)allowsPartialDownloads;
- (void)setAllowsPartialDownloads:(BOOL)a0;
- (BOOL)isSuccessful;
- (void)setFetchBodyData:(BOOL)a0;
- (void)handleFetchResult:(id)a0;
- (void)processResults;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)_networkConverterWithConsumer:(id)a0 didReceiveData:(id /* block */)a1;
- (BOOL)fetchBodyData;

@end

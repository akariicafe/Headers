@class NSString, HCHuffmanCoder, TITypingSessionAligned, NSArray, TITypingSession, NSLock;
@protocol TIDPReportingDelegate;

@interface TIDPRecorder : NSObject {
    NSLock *_delegateLock;
}

@property (readonly, nonatomic) NSString *recordingKeyLocaleSubstring;
@property (readonly, nonatomic) HCHuffmanCoder *characterCoder;
@property (readonly, nonatomic) HCHuffmanCoder *wordCoder;
@property (readonly, nonatomic) TITypingSession *typingSession;
@property (readonly, nonatomic) TITypingSessionAligned *typingSessionAligned;
@property (readonly, nonatomic) NSString *recordingKey;
@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) NSArray *characterExplodedRecords;
@property (retain, nonatomic) id<TIDPReportingDelegate> delegate;

- (BOOL)report;
- (void).cxx_destruct;
- (id)initWithTypingSession:(id)a0 aligned:(id)a1;
- (void)_prepareCharacterCoderMatchingSession;
- (void)_prepareWordCoderMatchingSession;

@end

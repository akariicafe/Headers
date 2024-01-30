@class NSString;

@interface WebAVAssetWriterDelegate : NSObject <AVAssetWriterDelegate> {
    void *m_writer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

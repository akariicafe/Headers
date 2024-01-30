@class NSString, TSUBufferedReadChannel;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {
    TSUBufferedReadChannel *_bufferedReadChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

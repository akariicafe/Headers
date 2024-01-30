@class TSPPasteboard, NSArray, NSString, NSMutableDictionary;

@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder> {
    TSPPasteboard *_pasteboard;
    NSMutableDictionary *_nativeData;
    NSMutableDictionary *_tspData;
}

@property (readonly, nonatomic) NSArray *promisedDataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dataForIdentifier:(long long)a0;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForDataWithIdentifier:(long long)a0 info:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)initWithPasteboard:(id)a0 nativeData:(id)a1 tspData:(id)a2;
- (void)loadNativeData;

@end

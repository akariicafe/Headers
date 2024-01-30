@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_data;

@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder> {
    NSObject<OS_dispatch_data> *_encodedData;
    unsigned long long _encodedDataLength;
    NSMutableDictionary *_directory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEncodedData:(id)a0;
- (id)newReadChannelForLocator:(id)a0;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForDataWithIdentifier:(long long)a0 info:(id)a1;

@end

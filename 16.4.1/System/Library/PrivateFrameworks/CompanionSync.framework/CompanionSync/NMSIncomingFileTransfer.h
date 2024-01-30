@class NMSMessageCenter, NSString, NSDictionary, NSURL, IDSMessageContext;

@interface NMSIncomingFileTransfer : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>

@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) id pbHeaderInfo;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) NSString *sourceDeviceID;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;

@end

@class NSString;

@interface SGDonatedContactDissector : SGPipelineDissector <SGTextMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;

@end

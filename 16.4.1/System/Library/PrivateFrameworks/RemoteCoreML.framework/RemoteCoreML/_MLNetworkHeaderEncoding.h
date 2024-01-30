@interface _MLNetworkHeaderEncoding : NSObject

+ (id)loadModel:(id)a0;
+ (id)custom:(id)a0;
+ (BOOL)isHeaderCustom:(unsigned long long)a0;
+ (BOOL)isHeaderUnLoad:(unsigned long long)a0;
+ (id)predictFeature:(id)a0;
+ (id)acknowledgeFailData;
+ (id)acknowledgeSucessData;
+ (id)constructDataPacket:(id)a0 HeaderEncoding:(unsigned long long)a1;
+ (unsigned long long)getHeaderDataSize:(id)a0;
+ (void *)getHeaderDataStart:(id)a0;
+ (unsigned long long)getHeaderEncoding:(id)a0;
+ (void *)getHeaderEnd:(id)a0;
+ (unsigned long long)getHeaderSize;
+ (BOOL)isHeaderAcknowledgeFailData:(unsigned long long)a0;
+ (BOOL)isHeaderAcknowledgeSucessData:(unsigned long long)a0;
+ (BOOL)isHeaderError:(unsigned long long)a0;
+ (BOOL)isHeaderIncomingData:(unsigned long long)a0;
+ (BOOL)isHeaderLoad:(unsigned long long)a0;
+ (BOOL)isHeaderPredictFeature:(unsigned long long)a0;
+ (BOOL)isHeaderText:(unsigned long long)a0;
+ (id)textDebug:(id)a0;
+ (id)unLoadModel:(id)a0;

@end

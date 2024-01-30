@class NSString;

@interface VNVideoProcessorCadence : NSObject <VNVideoProcessorRequestConfigurationPopulating, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)a0;

@end

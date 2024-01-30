@class NSString, SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying> {
    SSOperationProgress *_operationProgress;
}

@property (readonly) SSOperationProgress *operationProgress;
@property (readonly) long long phaseType;
@property (readonly) long long progressValue;
@property (readonly) long long totalProgressValue;
@property (readonly) long long progressUnits;
@property (readonly) double estimatedSecondsRemaining;
@property (readonly) float progressChangeRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOperationProgress:(id)a0;
- (void)dealloc;

@end

@class NSString;

@interface BCSRealTimeFlagSignposter : BCSRealTimeShardSignposter <BCSRealTimeFlagMeasurementHandler> {
    long long _signposterType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flagMeasurementDidChange:(BOOL)a0 forMeasurement:(id)a1;

@end

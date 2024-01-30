@class NSString;

@interface HMDSoftwareUpdateFetchedEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=wasUserInitiated) BOOL userInitiated;
@property (nonatomic, getter=wasNewUpdateFetched) BOOL newUpdateFetched;

+ (id)eventWasUserInitiated:(BOOL)a0 wasNewUpdateFetched:(BOOL)a1;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end

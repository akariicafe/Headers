@class NSString;

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=wasUserInitiated) BOOL userInitiated;
@property (nonatomic, getter=wasNewUpdateFetched) BOOL newUpdateFetched;

+ (void)initialize;
+ (id)uuid;
+ (id)eventWasUserInitiated:(BOOL)a0 wasNewUpdateFetched:(BOOL)a1;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end

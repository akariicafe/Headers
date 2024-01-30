@class NSArray, NSSet, NSString, STMutableListData;

@interface STMutableCallingStatusDomainData : STCallingStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *callDescriptorListData;
@property (copy, nonatomic) NSArray *callDescriptors;
@property (copy, nonatomic) NSSet *activeCallAttributions;
@property (copy, nonatomic) NSSet *ringingCallAttributions;
@property (copy, nonatomic) NSSet *activeVideoConferenceAttributions;
@property (copy, nonatomic) NSSet *ringingVideoConferenceAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRingingVideoConferenceAttributions:(id)a0;
- (BOOL)applyDiff:(id)a0;
- (void)removeRingingCallAttribution:(id)a0;
- (void)addActiveCallAttribution:(id)a0;
- (void)setActiveCallAttributions:(id)a0;
- (void)removeCallDescriptor:(id)a0;
- (void)setCallDescriptors:(id)a0;
- (id)initWithCallDescriptorListData:(id)a0;
- (void)removeActiveCallAttribution:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActiveVideoConferenceAttributions:(id)a0;
- (void)setRingingCallAttributions:(id)a0;
- (void)removeRingingVideoConferenceAttribution:(id)a0;
- (void)addActiveVideoConferenceAttribution:(id)a0;
- (void)removeActiveVideoConferenceAttribution:(id)a0;
- (void)addRingingCallAttribution:(id)a0;
- (void)addRingingVideoConferenceAttribution:(id)a0;
- (void)addCallDescriptor:(id)a0;

@end

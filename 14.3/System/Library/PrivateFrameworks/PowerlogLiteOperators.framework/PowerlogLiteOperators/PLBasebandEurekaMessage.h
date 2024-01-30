@class NSData;

@interface PLBasebandEurekaMessage : PLBasebandMessage

@property struct _PLBasebandEventHeader { struct _PLBasebandMessageHeader { unsigned char x0; } x0; unsigned int x1; unsigned char x2[8]; unsigned char x3; } *header;
@property (retain) NSData *payload;
@property struct _PLBasebandSystemSelectionEvent { unsigned short x0; } *ssevent;
@property char *ssaction;
@property char *ssstate;
@property unsigned char skip;
@property (readonly) unsigned int eventCode;

- (void)logWithLogger:(id)a0;
- (void).cxx_destruct;
- (id)convertCMCallOrigV2PayloadToDictionary:(struct _NewCMCallOrigPayload { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0;
- (id)stateStringLTE:(char *)a0;
- (id)initWithData:(id)a0;
- (id)eventStringACC:(char *)a0;
- (id)relCauseLTE:(char *)a0;
- (id)iratHOStringLTE:(char *)a0;
- (id)procedureStringPSSI:(char *)a0;
- (id)establishmentCauseStringWCDMA:(char *)a0;
- (id)stateStringWCDMA:(char *)a0;
- (id)stateStringHSUPA:(char *)a0;
- (id)convertCMCallOrigPayloadToDictionary:(struct _CMCallOrigPayload { unsigned char x0; unsigned char x1; unsigned char x2; } *)a0;
- (id)convertCMCallConnectV2PayloadToDictionary:(struct _NewCMCallConnectPayload { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0;
- (id)iratStringLTE:(char *)a0;
- (id)payloadString;
- (id)stateStringMotion:(char *)a0;
- (id)stateStringACC:(char *)a0;
- (id)eventSystemSelection;
- (id)stateSystemSelection;
- (id)stateStringHSPAPLUS_DC:(char *)a0;
- (id)stateStringOOS:(char *)a0;
- (void)parseData:(id)a0;
- (id)scanTypeStopWCDMA:(char *)a0;
- (id)convertCMCallConnectPayloadToDictionary:(struct _CMCallConnectPayload { unsigned char x0; unsigned char x1; unsigned char x2; } *)a0;
- (id)stateStringGSM:(char *)a0;
- (id)callTypeString:(char *)a0;
- (id)scanTypeStartWCDMA:(char *)a0;
- (id)pagingTypeWCDMA:(char *)a0;
- (id)soCallTypeString:(char *)a0;
- (id)eventStringOOS:(char *)a0;
- (id)searchPhaseStringPSSI:(char *)a0;
- (id)actionSystemSelection;
- (id)stateStringHSDPA:(char *)a0;
- (id)ratStringPSSI:(char *)a0;
- (id)tooShortErrorString;
- (id)releaseCauseStringWCDMA:(char *)a0;
- (id)cellUpdateCause:(char *)a0;
- (id)stringForUnknownBytes:(unsigned int)a0;
- (id)cellularSystemStringSystemSelection:(char *)a0;
- (id)stateStringUTRANL1:(char *)a0;
- (id)smgmmEventType:(char *)a0;
- (id)estCauseLTE:(char *)a0;
- (id)pagingCauseWCDMA:(char *)a0;
- (id)termStringSystemSelection:(char *)a0;
- (id)cdmaExitString:(char *)a0;

@end

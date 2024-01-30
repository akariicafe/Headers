@interface CHIPDoorLock : CHIPCluster

@property (readonly) struct DoorLockCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)clearAllPins:(id /* block */)a0;
- (void)clearAllRfids:(id /* block */)a0;
- (void)clearHolidaySchedule:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)clearPin:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)clearRfid:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)clearWeekdaySchedule:(unsigned char)a0 userId:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)clearYeardaySchedule:(unsigned char)a0 userId:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)getHolidaySchedule:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)getLogRecord:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)getPin:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)getRfid:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)getUserType:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)getWeekdaySchedule:(unsigned char)a0 userId:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)getYeardaySchedule:(unsigned char)a0 userId:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)lockDoor:(id)a0 responseHandler:(id /* block */)a1;
- (void)setHolidaySchedule:(unsigned char)a0 localStartTime:(unsigned int)a1 localEndTime:(unsigned int)a2 operatingModeDuringHoliday:(unsigned char)a3 responseHandler:(id /* block */)a4;
- (void)setPin:(unsigned short)a0 userStatus:(unsigned char)a1 userType:(unsigned char)a2 pin:(id)a3 responseHandler:(id /* block */)a4;
- (void)setRfid:(unsigned short)a0 userStatus:(unsigned char)a1 userType:(unsigned char)a2 id:(id)a3 responseHandler:(id /* block */)a4;
- (void)setUserType:(unsigned short)a0 userType:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)setWeekdaySchedule:(unsigned char)a0 userId:(unsigned short)a1 daysMask:(unsigned char)a2 startHour:(unsigned char)a3 startMinute:(unsigned char)a4 endHour:(unsigned char)a5 endMinute:(unsigned char)a6 responseHandler:(id /* block */)a7;
- (void)setYeardaySchedule:(unsigned char)a0 userId:(unsigned short)a1 localStartTime:(unsigned int)a2 localEndTime:(unsigned int)a3 responseHandler:(id /* block */)a4;
- (void)unlockDoor:(id)a0 responseHandler:(id /* block */)a1;
- (void)unlockWithTimeout:(unsigned short)a0 pin:(id)a1 responseHandler:(id /* block */)a2;
- (void)readAttributeLockStateWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeLockStateWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)reportAttributeLockStateWithResponseHandler:(id /* block */)a0;
- (void)readAttributeLockTypeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeActuatorEnabledWithResponseHandler:(id /* block */)a0;

@end

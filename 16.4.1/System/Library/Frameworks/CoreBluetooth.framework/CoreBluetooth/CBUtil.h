@interface CBUtil : NSObject

+ (BOOL)isAppleVID:(unsigned short)a0 forVIDSrc:(unsigned char)a1;
+ (BOOL)isDeviceSupportedOnWatchOSWithType:(unsigned char)a0 VIDsrc:(unsigned char)a1 VID:(unsigned short)a2 PID:(unsigned short)a3;
+ (BOOL)isDeviceSupportedWithType:(unsigned char)a0 VIDsrc:(unsigned char)a1 VID:(unsigned short)a2 PID:(unsigned short)a3;
+ (BOOL)isWatchOS;
+ (id)preSSPPairingCodeToString:(long long)a0;
+ (long long)preSSPStringToPairingCode:(id)a0;

@end

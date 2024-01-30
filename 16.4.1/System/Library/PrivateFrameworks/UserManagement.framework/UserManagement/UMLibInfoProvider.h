@class NSString;

@interface UMLibInfoProvider : NSObject <UMLibInfoProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)passwdForUID:(unsigned int)a0 error:(id *)a1;

@end

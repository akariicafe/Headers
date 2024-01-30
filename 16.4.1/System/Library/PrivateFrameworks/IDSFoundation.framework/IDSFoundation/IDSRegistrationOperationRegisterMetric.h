@class NSString, NSNumber, NSDictionary;

@interface IDSRegistrationOperationRegisterMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) unsigned int connectionType;
@property (readonly, nonatomic) unsigned int resultCode;
@property (readonly, nonatomic) unsigned int registrationError;
@property (readonly, nonatomic) BOOL isHeartbeatRegister;
@property (readonly, nonatomic) NSNumber *heartbeatDelay;
@property (readonly, nonatomic) NSNumber *genericError;
@property (readonly, nonatomic) NSNumber *URLError;
@property (readonly, nonatomic) NSNumber *POSIXError;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 success:(BOOL)a1 connectionType:(unsigned int)a2 resultCode:(unsigned int)a3 registrationType:(unsigned int)a4 isHeartbeatRegister:(BOOL)a5 heartbeatDelay:(id)a6 genericError:(id)a7 URLError:(id)a8 POSIXError:(id)a9;

@end

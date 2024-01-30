@class NSString;

@interface SRReaderRequest : NSObject <SRRequestReading>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sensor;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

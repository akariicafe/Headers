@class NSString;
@protocol SRRequestReading;

@interface SRReaderFetchRequest : NSObject <SRRequestFetching> {
    id<SRRequestReading> _readerRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sensor;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property double from;
@property double to;
@property BOOL bypassHoldingPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

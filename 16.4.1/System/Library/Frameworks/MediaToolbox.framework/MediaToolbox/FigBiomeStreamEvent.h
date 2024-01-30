@class NSString, NSDictionary;

@interface FigBiomeStreamEvent : NSObject <BMStoreData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)serialize;
- (id)initWithTimestamp:(double)a0 bundleId:(id)a1 payload:(id)a2;

@end

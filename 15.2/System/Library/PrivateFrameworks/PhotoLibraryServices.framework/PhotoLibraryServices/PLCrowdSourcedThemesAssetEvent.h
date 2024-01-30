@class NSString;

@interface PLCrowdSourcedThemesAssetEvent : NSObject <BMStoreData>

@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithUUID:(id)a0;
- (id)serialize;
- (void).cxx_destruct;

@end

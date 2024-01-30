@class NSString;

@interface BCSRealTimeFlagSignposter : BCSRealTimeSignposter <BCSRealTimeFlagMeasurementHandler>

@property (nonatomic) long long signposterType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signposterForBCSType:(long long)a0;
+ (id)signposterForShardIdentifier:(id)a0;
+ (id)signposterForItemIdentifier:(id)a0;

@end

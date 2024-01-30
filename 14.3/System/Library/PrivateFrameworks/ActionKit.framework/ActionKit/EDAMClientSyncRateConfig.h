@class NSNumber;

@interface EDAMClientSyncRateConfig : FATObject

@property (retain, nonatomic) NSNumber *syncStateIntervalMillis;
@property (retain, nonatomic) NSNumber *updateNoteWhenIdleForMillis;
@property (retain, nonatomic) NSNumber *updateNoteDuringEditIntervalMillis;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

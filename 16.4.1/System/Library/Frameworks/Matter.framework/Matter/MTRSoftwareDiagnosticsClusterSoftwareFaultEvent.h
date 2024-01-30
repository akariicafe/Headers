@class NSNumber, NSString, NSData;

@interface MTRSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *faultRecording;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

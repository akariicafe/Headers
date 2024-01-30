@class NSError, UIImage;

@interface _PBFComplicationSnapshotResult : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) UIImage *snapshot;

- (void).cxx_destruct;
- (id)initWithSnapshot:(id)a0 error:(id)a1;

@end

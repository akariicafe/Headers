@class MPAVOutputDeviceRoute, NSSet, NSString;

@interface MRUListeningMode : NSObject

@property (readonly, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute;
@property (readonly, nonatomic) NSSet *availableListeningModes;
@property (readonly, nonatomic) NSString *currentListeningMode;

- (BOOL)isEqual:(id)a0;
- (id)initWithOutputDeviceRoute:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

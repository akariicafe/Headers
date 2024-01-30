@class CRCameraReader, NSMutableDictionary;

@interface CRInsightsContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (weak, nonatomic) CRCameraReader *cameraReader;

- (id)valueForKey:(id)a0;
- (id)initWithContext:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end

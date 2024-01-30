@class CRCameraReader, NSMutableDictionary;

@interface CRInsightsContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (weak, nonatomic) CRCameraReader *cameraReader;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)description;
- (void)setValue:(id)a0 forKey:(id)a1;

@end

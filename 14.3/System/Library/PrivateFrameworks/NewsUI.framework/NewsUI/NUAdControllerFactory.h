@class NSString;
@protocol NUAdSettings;

@interface NUAdControllerFactory : NSObject <NUAdControllerFactory>

@property (readonly, nonatomic) id<NUAdSettings> settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)createAdControllerForProvider:(id)a0 document:(id)a1 viewport:(id)a2;

@end

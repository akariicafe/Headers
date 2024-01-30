@class NSDictionary, PHASEEngine;

@interface PHASEGroupPreset : NSObject {
    PHASEEngine *_engine;
}

@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) double timeToTarget;
@property (readonly, nonatomic) double timeToReset;

+ (id)new;

- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)deactivate;
- (id)initWithEngine:(id)a0 settings:(id)a1 timeToTarget:(double)a2 timeToReset:(double)a3;
- (void)activateWithTimeToTargetOverride:(double)a0;
- (void)deactivateWithTimeToResetOverride:(double)a0;

@end

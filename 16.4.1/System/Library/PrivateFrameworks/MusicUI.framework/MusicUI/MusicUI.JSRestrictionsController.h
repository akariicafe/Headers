@class JSValue;

@interface MusicUI.JSRestrictionsController : NSObject <MusicUI.JSRestrictionsControllerExports> {
    void /* unknown type, empty encoding */ _isExplicitContentRestricted;
    void /* unknown type, empty encoding */ _areMusicVideosRestricted;
    void /* unknown type, empty encoding */ _isTVRestricted;
    void /* unknown type, empty encoding */ _areMoviesRestricted;
    void /* unknown type, empty encoding */ _isSocialDisabled;
    void /* unknown type, empty encoding */ restrictionsController;
}

@property (nonatomic, retain) JSValue *isExplicitContentRestricted;
@property (nonatomic, retain) JSValue *areMusicVideosRestricted;
@property (nonatomic, retain) JSValue *isTVRestricted;
@property (nonatomic, retain) JSValue *areMoviesRestricted;
@property (nonatomic, retain) JSValue *isSocialDisabled;

- (id)init;
- (void).cxx_destruct;

@end

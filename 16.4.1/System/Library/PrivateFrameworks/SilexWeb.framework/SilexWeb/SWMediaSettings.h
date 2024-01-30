@interface SWMediaSettings : NSObject

@property (readonly, nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback;
@property (readonly, nonatomic) BOOL fullScreenEnabled;

- (id)initWithMediaTypesRequiringUserActionForPlayback:(unsigned long long)a0 fullScreenEnabled:(BOOL)a1;

@end

@class NSString;

@interface STUICoreDevice : NSObject

@property (class, readonly) BOOL isiPad;
@property (class, readonly) BOOL isiPhone;
@property (class, readonly) BOOL isiPodTouch;
@property (class, readonly) BOOL isMac;
@property (class, readonly) NSString *localizedModel;

@end

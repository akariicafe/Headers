@class NSLocale;

@interface AVCCaptionsConfig : NSObject

@property (retain, nonatomic) NSLocale *locale;

- (id)description;
- (void)dealloc;

@end

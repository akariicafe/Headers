@class NSSet;

@interface VCMediaNegotiatorResultsCaptions : NSObject

@property (nonatomic) BOOL remoteCanDisplayCaptions;
@property (retain, nonatomic) NSSet *localLanguages;
@property (retain, nonatomic) NSSet *remoteLanguages;

- (void)dealloc;

@end

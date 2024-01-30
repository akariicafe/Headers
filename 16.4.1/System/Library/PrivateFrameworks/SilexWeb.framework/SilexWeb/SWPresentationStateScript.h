@class NSString, WKUserScript;

@interface SWPresentationStateScript : NSObject <SWScript>

@property (readonly, nonatomic) unsigned long long presentationState;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) WKUserScript *userScript;
@property (readonly, nonatomic) NSString *executableScript;
@property (readonly, nonatomic) BOOL queueable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPresentationState:(unsigned long long)a0;

@end

@class NSString, CVAMattingRequest;

@interface CVABackgroundRequestImplBase : NSObject <CVABackgroundRequest>

@property (retain) CVAMattingRequest *mattingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

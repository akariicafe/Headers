@class RCPMovie, NSString, SSUIRunPPTServiceRequest;

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCCoding>

@property (retain, nonatomic) SSUIRunPPTServiceRequest *runPPTServiceRequest;
@property (retain, nonatomic) RCPMovie *recapMovie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;

@end

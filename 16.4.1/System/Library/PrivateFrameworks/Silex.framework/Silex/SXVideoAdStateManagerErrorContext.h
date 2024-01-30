@class NSError, NSString;

@interface SXVideoAdStateManagerErrorContext : NSObject <NFStateMachineContextType>

@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;

@end

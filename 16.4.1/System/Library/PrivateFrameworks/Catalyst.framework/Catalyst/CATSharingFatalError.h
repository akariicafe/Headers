@class NSError, NSString;

@interface CATSharingFatalError : NSObject <CATSharingFailureEvent>

@property (readonly, nonatomic) long long failureType;
@property (readonly, nonatomic) NSError *underlyingError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUnderlyingError:(id)a0;

@end

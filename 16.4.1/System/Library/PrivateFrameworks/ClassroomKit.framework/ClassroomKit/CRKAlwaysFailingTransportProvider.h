@class NSString, NSError;

@interface CRKAlwaysFailingTransportProvider : NSObject <CRKTransportProviding> {
    NSError *mError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(id /* block */)a0;

@end

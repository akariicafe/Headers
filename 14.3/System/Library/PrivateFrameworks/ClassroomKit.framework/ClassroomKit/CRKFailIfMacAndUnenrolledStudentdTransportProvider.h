@class NSString;
@protocol CRKTransportProviding;

@interface CRKFailIfMacAndUnenrolledStudentdTransportProvider : NSObject <CRKTransportProviding> {
    id<CRKTransportProviding> mBaseTransportProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(id /* block */)a0;
- (id)initWithTransportProvider:(id)a0;

@end

@class NSError, NSData, CPLResource;

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject

@property (nonatomic, getter=isInMemoryRequest) BOOL inMemoryRequest;
@property (nonatomic) BOOL didStart;
@property (nonatomic) float progress;
@property (nonatomic) BOOL didFinish;
@property (retain, nonatomic) NSError *finalError;
@property (retain, nonatomic) CPLResource *finalResource;
@property (retain, nonatomic) NSData *finalData;

- (void).cxx_destruct;
- (id)description;

@end

@class NSURL, NSString;

@interface FMInternalFileContainer : NSObject <FMFileContainer>

@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)internalContainerURL;
- (void).cxx_destruct;
- (id)init;

@end

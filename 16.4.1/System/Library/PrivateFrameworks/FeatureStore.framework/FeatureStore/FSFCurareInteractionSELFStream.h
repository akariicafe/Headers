@class NSString, NSDictionary, NSError;

@interface FSFCurareInteractionSELFStream : NSObject <FSFStreamSourceProtocol> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFilter:(id)a0;
- (BOOL)insert:(id)a0 error:(id *)a1;
- (id)retrieve:(id)a0;
- (void)retrieve:(id)a0 completionHandler:(id /* block */)a1;
- (void)retrieveWithCompletionHandler:(void (^)(NSDictionary *, NSError *))a0;

@end

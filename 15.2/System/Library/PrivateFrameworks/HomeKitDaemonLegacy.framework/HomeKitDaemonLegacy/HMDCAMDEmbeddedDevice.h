@class NSString, NSMutableDictionary;

@interface HMDCAMDEmbeddedDevice : NSObject <HMDCAMCommunicationProtocols> {
    NSMutableDictionary *_classInstances;
}

@property BOOL filterNSDataLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueForUndefinedKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)performCommandFromClass:(id)a0 method:(id)a1 arguments:(id)a2 error:(id *)a3;
- (id)instanceOfClass:(Class)a0 forShortName:(id)a1;

@end

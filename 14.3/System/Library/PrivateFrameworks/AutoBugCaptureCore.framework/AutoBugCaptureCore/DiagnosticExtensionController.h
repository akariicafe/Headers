@class NSString, NSDateFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface DiagnosticExtensionController : NSObject {
    NSDateFormatter *dateFormatter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *destinationRootDirectory;

- (void).cxx_destruct;
- (void)collectDEPayloadsWithIdentifier:(id)a0 diagnosticExtensionsWithParameters:(id)a1 queue:(id)a2 reply:(id /* block */)a3;
- (id)initWithDestinationDirectory:(id)a0;
- (void)collectDEPayloadsWithIdentifier:(id)a0 diagnosticExtensions:(id)a1 queue:(id)a2 reply:(id /* block */)a3;

@end

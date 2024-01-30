@class NSString, _TtC21DocumentUnderstanding16DUDocumentUpdate, NSError;

@interface DocumentUnderstanding.DUClient : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ topLevelSpecifications;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleDocumentUpdateWithDocumentUpdate:(_TtC21DocumentUnderstanding16DUDocumentUpdate *)a0 completionHandler:(void (^)(NSError *))a1;

@end

@class NSString, NSExtension;

@interface _SLExtensionLazyMatcher : NSObject {
    NSString *_identifier;
    NSExtension *_extension;
}

@property (readonly, nonatomic) NSExtension *extension;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end

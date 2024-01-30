@class PNRPhoneNumberResolver;

@interface GEOPhoneNumberResolver : NSObject {
    PNRPhoneNumberResolver *_resolver;
}

+ (id)sharedResolver;

- (id)init;
- (void).cxx_destruct;
- (void)resolvePhoneNumbers:(id)a0 handler:(id /* block */)a1 queue:(id)a2;

@end

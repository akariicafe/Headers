@class PNRPhoneNumberResolver;

@interface GEOPhoneNumberResolver : NSObject {
    PNRPhoneNumberResolver *_resolver;
}

+ (id)sharedResolver;

- (void)resolvePhoneNumbers:(id)a0 handler:(id /* block */)a1 queue:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end

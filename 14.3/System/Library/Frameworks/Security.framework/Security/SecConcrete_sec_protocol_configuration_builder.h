@class NSString;

@interface SecConcrete_sec_protocol_configuration_builder : NSObject <OS_sec_protocol_configuration_builder> {
    struct __CFDictionary { } *dictionary;
    BOOL is_apple;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDictionary:(struct __CFDictionary { } *)a0 andInternalFlag:(BOOL)a1;

@end

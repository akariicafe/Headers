@interface SIComponentIdentifier : NSObject {
    void /* unknown type, empty encoding */ componentName;
    void /* unknown type, empty encoding */ uuidRepresentation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uuid;
}

@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(int)a0 uuid:(id)a1;
- (id)initWithName:(int)a0 schemaUUID:(id)a1;

@end

@class NSArray, VMUObjectIdentifier;

@interface VMUObjectIdentifierDriverKitSupport : NSObject {
    unsigned int _task;
    VMUObjectIdentifier *_objectIdentifier;
    unsigned int _vtableOffsetsCount;
    unsigned long long *_vtableOffsets;
    unsigned long long _vtableOffsetOfLegacyOSObject;
    unsigned long long _vtableOffsetOfRemoteDriverKitOSObject;
    NSArray *_privateFieldsOfRemoteDriverKitOSObject;
    unsigned long long _vtableOffsetOfLocalDriverKitOSObject;
    NSArray *_privateFieldsOfLocalDriverKitOSObject;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithObjectIdentifier:(id)a0;
- (id)_fieldsFromStructureLayout:(struct { unsigned long long x0; unsigned long long x1; char *x2; unsigned long long x3; unsigned long long x4; struct _IntrospectedObjectField { char *x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x5[0]; } *)a0 withOffset:(unsigned long long)a1;
- (id)_fieldsOfLegacyOSObject:(id)a0;
- (id)_fieldsOfLocalDriverKitOSObject:(id)a0;
- (id)_fieldsOfOSObject:(id)a0 startOffset:(unsigned long long)a1;
- (id)_fieldsOfRemoteDriverKitOSObject:(id)a0;
- (id)_labelForDriverKitOSClassLoadInformation:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)_labelForDriverKitOSMetaClass:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)classInfoForDriverKitMemory:(void *)a0 length:(unsigned long long)a1 atOffset:(unsigned long long)a2 translatedIsa:(unsigned long long)a3 symbol:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a4;
- (id)classInfoForDriverKitOSClassScan;
- (id)classInfoForDriverKitOSMetaClass;
- (id)classInfoForDriverKitOSMetaClassPrivate;
- (id)driverKitClassInfoForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForDriverKitMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2 class:(id)a3;

@end

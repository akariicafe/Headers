@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_IDToProperty;
    NSMutableDictionary *_propertyToID;
    NSObject<OS_dispatch_queue> *_dirtyQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL dirty;

+ (id)classTypes;
+ (id)enclosedClassTypes;

- (id)allSecurePropertyIDs;
- (void)encodeWithCoder:(id)a0;
- (void)forceImportSecureProperties:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)securePropertyForID:(id)a0;
- (id)description;
- (id)storeSecureProperty:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)forceWriteSecurePropertyID:(id)a0 withValue:(id)a1;
- (void)removeSecureProperty:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end

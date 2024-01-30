@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_IDToProperty;
    NSMutableDictionary *_propertyToID;
    NSObject<OS_dispatch_queue> *_dirtyQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL dirty;

+ (id)enclosedClassTypes;
+ (id)classTypes;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (id)storeSecureProperty:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)securePropertyForID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allSecurePropertyIDs;
- (id)description;
- (void)forceImportSecureProperties:(id)a0;
- (void)removeSecureProperty:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)forceWriteSecurePropertyID:(id)a0 withValue:(id)a1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;

@end

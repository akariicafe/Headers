@class NSString, DNDBypassSettings, NSDate;

@interface DNDSGlobalConfiguration : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long preventAutoReply;
@property (readonly, copy, nonatomic) DNDBypassSettings *bypassSettings;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)backingStoreWithFileURL:(id)a0;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithConfiguration:(id)a0;
- (id)initWithPreventAutoReply:(unsigned long long)a0 bypassSettings:(id)a1 lastModified:(id)a2 automaticallyGenerated:(BOOL)a3;
- (id)mergeWithGlobalConfiguration:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

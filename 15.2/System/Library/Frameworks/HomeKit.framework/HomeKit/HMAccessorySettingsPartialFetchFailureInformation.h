@class NSString, NSDictionary, NSArray, NSMutableDictionary;

@interface HMAccessorySettingsPartialFetchFailureInformation : NSObject <HMFObject, HMMessageEncoding, NSCopying, NSMutableCopying> {
    NSMutableDictionary *_mutableFailureTypes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSDictionary *failureTypes;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPayload:(id)a0;
- (id)payloadCopy;
- (id)initWithFailureTypes:(id)a0;
- (id)failedKeyPaths;
- (long long)fetchFailureTypeForKeyPath:(id)a0;
- (void)setFetchFailureType:(long long)a0 forKeyPath:(id)a1;

@end

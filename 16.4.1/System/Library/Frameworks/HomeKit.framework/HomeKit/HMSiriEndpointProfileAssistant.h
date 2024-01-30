@class NSString, NSArray, NSUUID, NSNumber;

@interface HMSiriEndpointProfileAssistant : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *name;
@property long long active;
@property (readonly) NSNumber *identifier;
@property (readonly, nonatomic, getter=isSiriAssistant) BOOL siriAssistant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)uniqueIdentifierNamespace;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 active:(long long)a2;
- (BOOL)_mergeWithNewObject:(id)a0;

@end

@class NSString, NSArray, NSUUID, HMFUnfairLock, NSNumber;

@interface HMSiriEndpointProfileAssistant : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {
    HMFUnfairLock *_lock;
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
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 active:(long long)a2;

@end

@class MPPlaybackArchive, NSSet, NSUUID, NSString, HMFUnfairLock, NSNumber;

@interface HMMediaPlaybackAction : HMAction <NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *mediaProfiles;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedForHome:(id)a0;
+ (id)mediaPlaybackActionWithProtoBuf:(id)a0 home:(id)a1;
+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_handleUpdates:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)type;
- (BOOL)isValid;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithMediaProfiles:(id)a0 playbackState:(long long)a1 volume:(id)a2 playbackArchive:(id)a3 uuid:(id)a4;
- (id)initWithMediaProfiles:(id)a0 playbackState:(long long)a1 volume:(id)a2 playbackArchive:(id)a3;
- (id)initWithPlaybackAction:(id)a0 uuid:(id)a1;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)encodeAsProtoBuf;
- (id)accessoryProfiles;
- (void)updateWithAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateWithAction:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_updateWithSerializedAction:(id)a0 home:(id)a1;

@end

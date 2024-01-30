@class NSArray, NSDateInterval, NSString, AFAudioSessionCoordinationDeviceInfo;

@interface AFAudioSessionCoordinationSnapshot : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *currentOrUpNextDateInterval;
@property (readonly, nonatomic) BOOL isAudioSessionActive;
@property (readonly, copy, nonatomic) NSArray *localActiveAssertionContexts;
@property (readonly, copy, nonatomic) NSArray *localPendingAssertionContexts;
@property (readonly, copy, nonatomic) NSArray *remoteActiveAssertionContexts;
@property (readonly, copy, nonatomic) NSArray *remotePendingAssertionContexts;
@property (readonly, copy, nonatomic) AFAudioSessionCoordinationDeviceInfo *localDevice;
@property (readonly, copy, nonatomic) NSArray *remoteQualifiedInRangeDevices;
@property (readonly, copy, nonatomic) NSArray *remoteQualifiedOutOfRangeDevices;
@property (readonly, copy, nonatomic) NSArray *remoteDisqualifiedDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCurrentOrUpNextDateInterval:(id)a0 isAudioSessionActive:(BOOL)a1 localActiveAssertionContexts:(id)a2 localPendingAssertionContexts:(id)a3 remoteActiveAssertionContexts:(id)a4 remotePendingAssertionContexts:(id)a5 localDevice:(id)a6 remoteQualifiedInRangeDevices:(id)a7 remoteQualifiedOutOfRangeDevices:(id)a8 remoteDisqualifiedDevices:(id)a9;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
